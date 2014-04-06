{
    'targets': [
        {
            'target_name': 'mercury',
            'sources': [ 'src/libmercury.cc' ],
            'include_dirs': [""],
            'conditions': [
                ['OS=="win"', { 'libraries': [] }]
            ]
        },
        {
	    "target_name": "after_install",
	    "type": "none",
            "dependencies": [ "mercury" ],
	    "copies": [
	       { "files": [ "<(PRODUCT_DIR)/mercury.node" ],
	         "destination": "."
	       }
	    ]
	}
    ]
}
