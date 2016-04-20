/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>

@protocol MPFilterSupport;
@class NSMutableDictionary, MCFilter, NSObject, MPFilterInternal, NSString;

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport> {

	NSMutableDictionary* _attributes;
	NSMutableDictionary* _animationPaths;
	MCFilter* _filter;
	NSObject*<MPFilterSupport> _parent;
	MPFilterInternal* _internal;

}

@property (nonatomic,copy) NSString * filterID; 
@property (nonatomic,copy) NSString * presetID; 
+(id)filterWithFilterID:(id)arg1 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)copyStruct:(id)arg1 ;
-(id)parentDocument;
-(void)setFilter:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)fullDebugLog;
-(id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2 ;
-(id)convertMCAttributeToMPAttribute:(id)arg1 withKey:(id)arg2 ;
-(void)dump;
-(id)filter;
-(void)setDefaults;
-(void)setFilterAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFilterID:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)setPresetID:(NSString *)arg1 ;
-(NSString *)presetID;
-(id)animationPaths;
-(id)filterAttributeForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)index;
-(id)filterAttributes;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(id)parent;
@end

