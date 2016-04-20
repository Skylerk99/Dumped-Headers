/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:58 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MPSlide, MPFrameInternal, NSString;

@interface MPFrame : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	MPSlide* _parentSlide;
	MPFrameInternal* _internal;

}

@property (nonatomic,copy) NSString * frameID; 
@property (nonatomic,copy) NSString * presetID; 
+(id)frameWithFrameID:(id)arg1 ;
-(void)setParentSlide:(id)arg1 ;
-(void)copyStruct:(id)arg1 ;
-(id)parentDocument;
-(id)fullDebugLog;
-(void)dump;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFrameID:(id)arg1 ;
-(id)parentSlide;
-(id)frameAttributes;
-(void)setPresetID:(NSString *)arg1 ;
-(NSString *)frameID;
-(void)setFrameID:(NSString *)arg1 ;
-(NSString *)presetID;
-(id)frameAttributeForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

