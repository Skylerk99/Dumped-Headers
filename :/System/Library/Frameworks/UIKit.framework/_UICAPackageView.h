/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView {

	CAPackage* _package;
	NSArray* _rootViews;

}
+(BOOL)_shouldCatchDecodingExceptions;
+(id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3 ;
+(void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedViewWithName:(id)arg1 ;
@end

