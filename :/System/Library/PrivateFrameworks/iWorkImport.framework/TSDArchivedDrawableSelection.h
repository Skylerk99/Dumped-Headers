/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TSDDrawableSelection, NSString, TSKSelection;

@interface TSDArchivedDrawableSelection : TSPObject <TSKArchivedSelection> {

	TSDDrawableSelection* mDrawableSelection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSelection * selection; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 intoMessage:(DrawableSelectionArchive*)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
@end

