/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSLocale, GEOResourceManifestConfiguration;

@interface VKMapSnapshotRequest : NSObject {

	unsigned _scale;
	long long _mapType;
	NSLocale* _locale;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	CGSize _size;
	SCD_Struct_VK112 _region;

}

@property (assign,nonatomic) SCD_Struct_VK112 region;                                               //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) long long mapType;                                                     //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned scale;                                                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) GEOResourceManifestConfiguration * manifestConfiguration;              //@synthesize manifestConfiguration=_manifestConfiguration - In the implementation block
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setScale:(unsigned)arg1 ;
-(unsigned)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)setRegion:(SCD_Struct_VK112)arg1 ;
-(SCD_Struct_VK112)region;
-(void)setManifestConfiguration:(GEOResourceManifestConfiguration *)arg1 ;
-(GEOResourceManifestConfiguration *)manifestConfiguration;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(VKRequestKey)_requestKey;
@end

