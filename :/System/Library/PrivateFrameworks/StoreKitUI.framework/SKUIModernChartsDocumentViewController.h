/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>

@class SKUIActivityIndicatorView, SKUIModernChartsView, NSMutableArray, SKUILayoutCache, SKUIChartsTemplateViewElement, SKUIViewElementLayoutContext, NSString;

@interface SKUIModernChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIModalSourceViewProvider> {

	SKUIActivityIndicatorView* _activityIndicatorView;
	SKUIModernChartsView* _chartsView;
	NSMutableArray* _columnViewControllers;
	SKUILayoutCache* _layoutCache;
	SKUIChartsTemplateViewElement* _templateElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(UIEdgeInsets)_contentInset;
-(id)contentScrollView;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(id)_layoutCache;
-(id)_viewLayoutContext;
-(id)_newColumnViewControllersWithReusableViewControllers:(id)arg1 ;
-(void)_showActivityIndicator;
-(void)_reloadWithTemplateElement:(id)arg1 ;
-(void)_hideActivityIndicator;
@end

