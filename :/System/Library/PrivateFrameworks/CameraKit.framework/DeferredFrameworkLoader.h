/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DeferredFrameworkLoader : NSObject {

	NSString* _path;
	void* _frameworkHandle;
	long long _frameworkLoadedToken;

}

@property (nonatomic,retain) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) void* frameworkHandle;                       //@synthesize frameworkHandle=_frameworkHandle - In the implementation block
@property (assign,nonatomic) long long frameworkLoadedToken;              //@synthesize frameworkLoadedToken=_frameworkLoadedToken - In the implementation block
+(id)PhotosUIFrameworkPath;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(Class)classFromString:(id)arg1 ;
-(void*)frameworkHandle;
-(void)setFrameworkHandle:(void*)arg1 ;
-(long long)frameworkLoadedToken;
-(void)setFrameworkLoadedToken:(long long)arg1 ;
@end

