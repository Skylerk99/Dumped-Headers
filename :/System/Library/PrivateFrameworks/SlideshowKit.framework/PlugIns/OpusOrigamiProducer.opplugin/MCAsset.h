/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class NSString;

@interface MCAsset : MCObject {

	NSString* mPath;

}

@property (copy) NSString * path; 
@property (nonatomic,readonly) BOOL isInUse; 
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)demolish;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)isInUse;
-(id)imprint;
@end

