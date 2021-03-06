/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, CHDFormula, OADGraphicProperties;

@interface CHDTrendlineLabel : NSObject {

	EDResources* mResources;
	CHDFormula* mName;
	unsigned long long mLastCachedNameStringIndex;
	unsigned long long mContentFormatId;
	BOOL mContentFormatDerived;
	BOOL mGeneratedText;
	BOOL mAutomaticLabelDeleted;
	OADGraphicProperties* mGraphicProperties;

}
+(id)trendlineLabelWithResources:(id)arg1 ;
-(unsigned long long)contentFormatId;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(unsigned long long)stringIndex;
-(void)setStringIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)graphicProperties;
-(id)contentFormat;
-(id)lastCachedName;
-(void)setGraphicProperties:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setName:(id)arg1 chart:(id)arg2 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(void)setGeneratedText:(BOOL)arg1 ;
-(void)setAutomaticLabelDeleted:(BOOL)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isGeneratedText;
-(BOOL)isAutomaticLabelDeleted;
@end

