/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL;

@interface MusicStreamingItemAssetDescriptor : NSObject {

	NSString* _downloadKey;
	NSString* _flavor;
	NSArray* _sinfs;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSString * downloadKey;              //@synthesize downloadKey=_downloadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * flavor;                   //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sinfs;                     //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                       //@synthesize URL=_URL - In the implementation block
-(id)_initWithResponseDictionary:(id)arg1 ;
-(NSString *)flavor;
-(NSArray *)sinfs;
-(NSString *)downloadKey;
-(id)description;
-(NSURL *)URL;
@end

