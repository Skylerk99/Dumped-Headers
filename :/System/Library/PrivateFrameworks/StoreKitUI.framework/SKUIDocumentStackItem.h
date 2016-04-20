/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppDocument, SKUINavigationDocumentController, NSDictionary, UIViewController, UIPopoverPresentationController, NSString;

@interface SKUIDocumentStackItem : NSObject {

	IKAppDocument* _document;
	SKUINavigationDocumentController* _navigationDocumentController;
	NSDictionary* _presentationOptions;
	BOOL _usesNavigationControllerForModalPresentation;
	UIViewController* _viewController;
	UIPopoverPresentationController* _popoverPresentationController;

}

@property (nonatomic,readonly) IKAppDocument * document;                                                   //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSDictionary * presentationOptions;                                         //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (assign,nonatomic) BOOL usesNavigationControllerForModalPresentation;                            //@synthesize usesNavigationControllerForModalPresentation=_usesNavigationControllerForModalPresentation - In the implementation block
@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;              //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * popoverPresentationController;              //@synthesize popoverPresentationController=_popoverPresentationController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) NSString * presentationType; 
@property (nonatomic,readonly) NSString * sheetType; 
@property (nonatomic,readonly) NSString * overlayType; 
@property (nonatomic,readonly) NSString * sourceElementIdentifier; 
-(id)init;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIPopoverPresentationController *)popoverPresentationController;
-(BOOL)isAnimated;
-(IKAppDocument *)document;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(NSDictionary *)presentationOptions;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
-(void)_setDocument:(id)arg1 ;
-(NSString *)presentationType;
-(NSString *)sheetType;
-(NSString *)overlayType;
-(NSString *)sourceElementIdentifier;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(BOOL)usesNavigationControllerForModalPresentation;
-(void)setUsesNavigationControllerForModalPresentation:(BOOL)arg1 ;
-(void)setPopoverPresentationController:(UIPopoverPresentationController *)arg1 ;
@end

