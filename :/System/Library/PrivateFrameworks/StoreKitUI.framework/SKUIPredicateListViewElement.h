/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSPredicate, NSArray;

@interface SKUIPredicateListViewElement : SKUIViewElement {

	NSPredicate* _compoundEntityValuePredicate;

}

@property (nonatomic,copy,readonly) NSArray * predicateViewElements; 
@property (nonatomic,readonly) NSPredicate * compoundEntityValuePredicate; 
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_enumeratePredicateViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)predicateViewElements;
-(NSPredicate *)compoundEntityValuePredicate;
@end

