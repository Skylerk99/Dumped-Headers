/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOTileRequester;

@interface RequesterContext : NSObject {

	GEOTileRequester* _tileRequester;
	GEOTileKey _key;
	unsigned long long _featureID;

}

@property (nonatomic,retain) GEOTileRequester * tileRequester;              //@synthesize tileRequester=_tileRequester - In the implementation block
@property (assign,nonatomic) GEOTileKey key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long featureID;                  //@synthesize featureID=_featureID - In the implementation block
-(unsigned long long)featureID;
-(GEOTileKey)key;
-(void)setKey:(GEOTileKey)arg1 ;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
-(GEOTileRequester *)tileRequester;
-(void)setFeatureID:(unsigned long long)arg1 ;
@end

