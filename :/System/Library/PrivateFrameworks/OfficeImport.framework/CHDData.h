/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDDataValuesCollection, CHDFormula, EDResources;

@interface CHDData : NSObject {

	CHDDataValuesCollection* mDataValues;
	CHDFormula* mFormula;
	unsigned long long mContentFormatId;
	unsigned long long mDataValueIndexCount;
	EDResources* mResources;

}
+(id)dataWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2 ;
+(id)dataWithResources:(id)arg1 ;
-(unsigned long long)contentFormatId;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(id)contentFormat;
-(id)dataValues;
-(id)formula;
-(void)setFormula:(id)arg1 chart:(id)arg2 ;
-(void)setDataValueIndexCount:(unsigned long long)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(id)initWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(unsigned long long)dataValueIndexCount;
-(unsigned long long)averageDataPointDecimalCount;
-(id)firstValueContentFormatWithWorkbook:(id)arg1 ;
@end

