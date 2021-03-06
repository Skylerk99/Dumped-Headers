/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class NSString, WBSParsecTableAlignmentSchema, NSArray;

@interface WBSParsecTableRowCardSection : WBSParsecCardSection {

	BOOL _hideDivider;
	NSString* _tableID;
	WBSParsecTableAlignmentSchema* _alignmentSchema;
	long long _rowType;
	NSArray* _values;

}

@property (nonatomic,copy,readonly) NSString * tableID;                                      //@synthesize tableID=_tableID - In the implementation block
@property (nonatomic,readonly) WBSParsecTableAlignmentSchema * alignmentSchema;              //@synthesize alignmentSchema=_alignmentSchema - In the implementation block
@property (nonatomic,readonly) long long rowType;                                            //@synthesize rowType=_rowType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                        //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) BOOL hideDivider;                                             //@synthesize hideDivider=_hideDivider - In the implementation block
+(id)_specializedCardSectionSchema;
-(NSArray *)values;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)tableID;
-(WBSParsecTableAlignmentSchema *)alignmentSchema;
-(long long)rowType;
-(BOOL)hideDivider;
@end

