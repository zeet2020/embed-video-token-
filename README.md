its simple implementation of token support for the emvideo module.

1.place the emvideo.token.inc file in your emvideo module 

2.load or include inc file in your module . paste the below code in your emvideo.module file
if(module_exists('token')){

module_load_include('inc','emvideo','emvideo.token');
}

3.save file and clear the cache

4. that's it.

note: token module is require for this to work 
