/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKShareID, CKShare;

@interface CKDShareResponse : NSObject {

	CKShareID* _shareID;
	CKShare* _share;

}

@property (nonatomic,retain) CKShareID * shareID;              //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKShare * share;                  //@synthesize share=_share - In the implementation block
-(id)description;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
-(void)setShareID:(CKShareID *)arg1 ;
@end

