/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TNFormSelection, NSString;

@interface TNArchivedFormSelection : TSPObject <TSKArchivedSelection> {

	TNFormSelection* _selection;

}

@property (nonatomic,retain) TNFormSelection * selection;              //@synthesize selection=_selection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)dealloc;
-(TNFormSelection *)selection;
-(void)setSelection:(TNFormSelection *)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

