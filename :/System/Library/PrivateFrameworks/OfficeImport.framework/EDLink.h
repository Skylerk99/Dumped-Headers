/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDLink : NSObject {

	int mType;
	EDCollection* mExternalNames;

}
+(id)linkWithType:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(id)externalNames;
@end

