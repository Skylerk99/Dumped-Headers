/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MUPDFViewControllerDelegate
@optional
-(void)pageWasRendered:(id)arg1;
-(CGRect*)frameForPDFViewWithHandler:(id)arg1 proposedFrame:(CGRect)arg2;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
-(id)passwordForPDFViewHandler:(id)arg1;
-(CGPoint*)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2;
-(double)minimumVerticalContentOffsetForPDFViewHandler:(id)arg1;
-(void)pdfView:(id)arg1 willAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)pdfView:(id)arg1 didAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)pdfView:(id)arg1 willRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)pdfView:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;

@end

