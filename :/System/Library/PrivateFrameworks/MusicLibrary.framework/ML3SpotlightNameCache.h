/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3MusicLibrary;

@interface ML3SpotlightNameCache : NSObject {

	unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > >* _map;
	BOOL _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(id)copyFromLibrary:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
@end

