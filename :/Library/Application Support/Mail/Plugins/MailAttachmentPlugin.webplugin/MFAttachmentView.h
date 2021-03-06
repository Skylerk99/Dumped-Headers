/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <MailAttachmentPlugin/MFRoundedRectView.h>
#import <MailAttachmentPlugin/MFProgressViewDelegate.h>
#import <MailAttachmentPlugin/MFMailAttachmentDownloadProgressDisplay.h>

@protocol MFMailAttachmentPlugInDelegate;
@class NSObject, MFMimeIconView, MFProgressView, UIColor, UILabel, NSString, NSDictionary;

@interface MFAttachmentView : MFRoundedRectView <MFProgressViewDelegate, MFMailAttachmentDownloadProgressDisplay> {

	NSObject*<MFMailAttachmentPlugInDelegate> _delegate;
	MFMimeIconView* _iconView;
	MFProgressView* _progressView;
	UIColor* _defaultTextColor;
	UIColor* _defaultBackgroundColor;
	UIColor* _statusTextColor;
	UILabel* _statusLabel;
	UILabel* _filenameLabel;
	UILabel* _filesizeLabel;
	UILabel* _fileinfoLabel;
	BOOL _iconIsHidden;
	BOOL _progressIsHidden;
	BOOL _statusIsHidden;
	BOOL _fileinfoIsHidden;
	BOOL _filesizeIsHidden;
	unsigned long long _filenameMaxLines;
	NSString* _totalSizeString;
	unsigned long long _totalSize;
	NSDictionary* _arguments;
	NSString* _uniqueIdentifier;
	int _theme;

}

@property (assign,nonatomic) int theme;                                //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) NSDictionary * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attachmentViewWithFrame:(CGRect)arg1 arguments:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 arguments:(id)arg2 ;
-(id)statusTextFontWithScale:(double)arg1 ;
-(void)setFilenameMaxLines:(unsigned long long)arg1 ;
-(void)prepareUI;
-(id)newStatusViewWithSettings:(id)arg1 ;
-(id)newFilenameViewWithSettings:(id)arg1 ;
-(id)newFileinfoViewWithSettings:(id)arg1 ;
-(id)newFilesizeViewWithSettings:(id)arg1 ;
-(double)_labelDistanceWithScale:(double)arg1 ;
-(CGRect)_boundingRectForLabel:(id)arg1 inRect:(CGRect)arg2 ;
-(id)infoTextFontWithScale:(double)arg1 ;
-(id)_documentIconClosestToSize:(CGSize)arg1 ;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)downloadProgressDidStart;
-(void)downloadProgressDidUpdatePercentageComplete:(float)arg1 ;
-(void)downloadProgressDidCancel;
-(void)downloadProgressDidEnd;
-(void)progressViewCanBeRemoved:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)drawRectForPrinting:(CGRect)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(int)theme;
-(void)setTheme:(int)arg1 ;
-(NSDictionary *)arguments;
@end

