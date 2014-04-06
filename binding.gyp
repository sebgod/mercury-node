{
    'targets': [
        {
            'target_name': 'libmercury',
            'sources': [ 'src/libmercury.cc' ],
            'include_dirs': [""],
            'conditions': [
                ['OS=="win"', { 'libraries': [] }]
            ]
        }
    ]
}
