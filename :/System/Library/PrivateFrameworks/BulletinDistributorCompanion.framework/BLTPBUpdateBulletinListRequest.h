/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBFullBulletinList;

@interface BLTPBUpdateBulletinListRequest : PBRequest <NSCopying> {

	BLTPBFullBulletinList* _bulletinList;

}

@property (nonatomic,readonly) BOOL hasBulletinList; 
@property (nonatomic,retain) BLTPBFullBulletinList * bulletinList;              //@synthesize bulletinList=_bulletinList - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBulletinList:(BLTPBFullBulletinList *)arg1 ;
-(BOOL)hasBulletinList;
-(BLTPBFullBulletinList *)bulletinList;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

