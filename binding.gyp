{
    'targets': [
        {
            'target_name': 'mercury',
            'sources': [ 'src/libmercury.cc' ],
            'include_dirs': [""],
            'conditions': [
                ['OS=="win"', { 'libraries': [] }]
            ]
        }
    ]
}
