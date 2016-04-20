/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSWPSmartField.h>
#import <iWorkImport/TSWPCitationRecordHosting.h>

@protocol TSWPCitationSmartFieldEditing;
@class NSArray, NSString;

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting> {

	BOOL _isLocalizable;
	NSArray* _citationRecords;
	id<TSWPCitationSmartFieldEditing> _editingDelegate;

}

@property (nonatomic,copy) NSArray * citationRecords;                                        //@synthesize citationRecords=_citationRecords - In the implementation block
@property (assign,nonatomic) BOOL isLocalizable;                                             //@synthesize isLocalizable=_isLocalizable - In the implementation block
@property (assign,nonatomic) id<TSWPCitationSmartFieldEditing> editingDelegate;              //@synthesize editingDelegate=_editingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidCitationField:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(int)smartFieldKind;
-(BOOL)isLocalizable;
-(void)setIsLocalizable:(BOOL)arg1 ;
-(void)setCitationRecords:(NSArray *)arg1 ;
-(NSArray *)citationRecords;
-(id)bibliographySmartField;
-(void)dealloc;
-(void)setEditingDelegate:(id<TSWPCitationSmartFieldEditing>)arg1 ;
-(id<TSWPCitationSmartFieldEditing>)editingDelegate;
@end

