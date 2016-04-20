/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPDFPageViewDelegate.h>
#import <UIKit/UIPDFAnnotationControllerDelegate.h>
#import <libobjc.A.dylib/WebPDFViewPlaceholderDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIWebPDFViewDelegate;
@class NSMutableArray, UIPDFDocument, NSObject, UITapGestureRecognizer, NSURL, NSArray, WebPDFViewPlaceholder, UIColor, NSString, NSData;

@interface UIWebPDFView : UIView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {

	NSMutableArray* _backingLayerImageViews;
	CGPDFDocumentRef _cgPDFDocument;
	UIPDFDocument* _document;
	BOOL _hasScheduledCacheUpdate;
	CGRect _documentBounds;
	NSObject*<UIWebPDFViewDelegate> _pdfDelegate;
	BOOL _delegateRespondsToDidScroll;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSURL* _documentURL;
	BOOL _rotating;
	BOOL _zooming;
	double _initialZoomScale;
	CGAffineTransform _documentTransform;
	double _documentScale;
	long long _ignoreContentOffsetChanges;
	CGPoint _contentOffsetAtScrollStart;
	NSMutableArray* _pageViews;
	NSArray* _pageMinYs;
	BOOL hidePageViewsUntilReadyToRender;
	BOOL hideActivityIndicatorForUnRenderedContent;
	BOOL readyForSnapshot;
	WebPDFViewPlaceholder* pdfPlaceHolderView;
	UIColor* backgroundColorForUnRenderedContent;
	NSString* documentPassword;
	NSArray* pageRects;

}

@property (assign,nonatomic) NSObject*<UIWebPDFViewDelegate> pdfDelegate;                 //@synthesize pdfDelegate=_pdfDelegate - In the implementation block
@property (nonatomic,retain) NSURL * documentURL;                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds;                                     //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) unsigned long long totalPages; 
@property (nonatomic,readonly) CGPDFDocumentRef cgPDFDocument; 
@property (nonatomic,readonly) UIPDFDocument * document; 
@property (nonatomic,readonly) NSData * documentData; 
@property (assign,nonatomic) BOOL readyForSnapshot; 
@property (assign) WebPDFViewPlaceholder * pdfPlaceHolderView; 
@property (assign,nonatomic) double initialZoomScale;                                     //@synthesize initialZoomScale=_initialZoomScale - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForUnRenderedContent; 
@property (assign,nonatomic) BOOL hideActivityIndicatorForUnRenderedContent; 
@property (assign,nonatomic) BOOL hidePageViewsUntilReadyToRender; 
@property (assign,nonatomic) long long ignoreContentOffsetChanges;                        //@synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges - In the implementation block
@property (assign,nonatomic) CGAffineTransform documentTransform;                         //@synthesize documentTransform=_documentTransform - In the implementation block
@property (nonatomic,retain) NSString * documentPassword; 
@property (nonatomic,readonly) double documentScale;                                      //@synthesize documentScale=_documentScale - In the implementation block
@property (nonatomic,retain) NSArray * pageRects; 
@property (nonatomic,retain) NSArray * pageMinYs;                                         //@synthesize pageMinYs=_pageMinYs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setAsPDFDocRepAndView;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_didScroll;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)documentBounds;
-(unsigned long long)totalPages;
-(NSArray *)pageRects;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(UIPDFDocument *)document;
-(id)_selection;
-(id)uiPDFDocument;
-(void)setBackgroundColorForUnRenderedContent:(UIColor *)arg1 ;
-(void)setPdfPlaceHolderView:(WebPDFViewPlaceholder *)arg1 ;
-(WebPDFViewPlaceholder *)pdfPlaceHolderView;
-(void)didCompleteLayout;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)willZoom:(id)arg1 ;
-(void)didZoom:(id)arg1 ;
-(void)willScroll:(id)arg1 ;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)setPageMinYs:(NSArray *)arg1 ;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(void)setDocumentPassword:(NSString *)arg1 ;
-(void)_removeBackgroundImageObserverIfNeeded:(id)arg1 ;
-(id)viewportView;
-(CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1 ;
-(void)setReadyForSnapshot:(BOOL)arg1 ;
-(id)viewAtIndex:(long long)arg1 ;
-(id)_installViewAtIndex:(long long)arg1 inFrame:(CGRect)arg2 ;
-(CGRect)_viewCachingBoundsInUIViewCoords;
-(void)_removePageViewsNotInViewCoordsRect:(CGRect)arg1 ;
-(void)_removePageViewsNotInCurrentViewCoordsRect;
-(void)_addSubViewsInViewCoordsBounds:(CGRect)arg1 force:(BOOL)arg2 ;
-(void)_scheduleRemovePageViewsNotInViewCoordsRect;
-(void)ensureCorrectPagesAreInstalled:(BOOL)arg1 ;
-(CGRect)_viewportBoundsInUIViewCoords;
-(void)_recreateUIPDFDocument;
-(NSString *)documentPassword;
-(BOOL)_checkIfDocumentNeedsUnlock;
-(void)resetZoom:(id)arg1 ;
-(void)_didTouch:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToURL:(id)arg4 ;
-(void)_didTouch:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4 ;
-(void)_didLongPress:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToURL:(id)arg4 ;
-(void)_didLongPress:(id)arg1 inRect:(CGRect)arg2 atPoint:(CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4 ;
-(id)_pageWithSelection;
-(unsigned long long)_pageNumberForRect:(CGRect)arg1 ;
-(CGPDFDocumentRef)cgPDFDocument;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4 ;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)viewWillClose;
-(void)setIgnoreContentOffsetChanges:(long long)arg1 ;
-(void)setPdfDelegate:(NSObject*<UIWebPDFViewDelegate>)arg1 ;
-(BOOL)_hasPageRects;
-(NSData *)documentData;
-(id)initWithWebPDFViewPlaceholder:(id)arg1 ;
-(id)_addPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstVisiblePageNumber;
-(void)prepareForSnapshot:(BOOL)arg1 ;
-(void)snapshotComplete;
-(BOOL)_tryToUnlockDocumentWithPassword:(id)arg1 ;
-(id)imageForContactRect:(CGRect)arg1 onPageInViewRect:(CGRect)arg2 destinationRect:(CGRect)arg3 ;
-(NSURL *)documentURL;
-(NSObject*<UIWebPDFViewDelegate>)pdfDelegate;
-(double)initialZoomScale;
-(void)setInitialZoomScale:(double)arg1 ;
-(CGAffineTransform)documentTransform;
-(void)setDocumentTransform:(CGAffineTransform)arg1 ;
-(double)documentScale;
-(long long)ignoreContentOffsetChanges;
-(BOOL)hidePageViewsUntilReadyToRender;
-(void)setHidePageViewsUntilReadyToRender:(BOOL)arg1 ;
-(UIColor *)backgroundColorForUnRenderedContent;
-(BOOL)hideActivityIndicatorForUnRenderedContent;
-(void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1 ;
-(BOOL)readyForSnapshot;
-(NSArray *)pageMinYs;
@end

