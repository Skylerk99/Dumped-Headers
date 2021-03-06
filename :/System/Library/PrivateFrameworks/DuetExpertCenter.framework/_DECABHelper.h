/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface _DECABHelper : NSObject {

	NSString* _groupIdentifier;
	NSDictionary* _abGroupContents;

}

@property (nonatomic,readonly) NSString * groupIdentifier;                  //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * abGroupContents;              //@synthesize abGroupContents=_abGroupContents - In the implementation block
+(unsigned char)_indexForDevice;
-(id)init;
-(NSDictionary *)abGroupContents;
-(id)initWithAssetContents:(id)arg1 ;
-(id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2 ;
-(NSString *)groupIdentifier;
@end

