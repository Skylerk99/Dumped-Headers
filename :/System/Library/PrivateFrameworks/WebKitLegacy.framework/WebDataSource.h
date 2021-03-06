/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class NSData, WebFrame, NSURLRequest, NSMutableURLRequest, NSURLResponse, NSString, NSURL, WebArchive, WebResource, NSArray;

@interface WebDataSource : NSObject {

	void* _private;

}

@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) id<WebDocumentRepresentation> representation; 
@property (nonatomic,readonly) WebFrame * webFrame; 
@property (nonatomic,readonly) NSURLRequest * initialRequest; 
@property (nonatomic,readonly) NSMutableURLRequest * request; 
@property (nonatomic,readonly) NSURLResponse * response; 
@property (nonatomic,copy,readonly) NSString * textEncodingName; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,copy,readonly) NSString * pageTitle; 
@property (nonatomic,readonly) NSURL * unreachableURL; 
@property (nonatomic,readonly) WebArchive * webArchive; 
@property (nonatomic,readonly) WebResource * mainResource; 
@property (nonatomic,copy,readonly) NSArray * subresources; 
+(id)_repTypesAllowImageTypeOmission:(BOOL)arg1 ;
+(void)initialize;
+(Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)_URL;
-(id)_documentFragmentWithArchive:(id)arg1 ;
-(id)_documentFragmentWithImageResource:(id)arg1 ;
-(id)_imageElementWithImageResource:(id)arg1 ;
-(void)_finishedLoading;
-(void)_receivedData:(id)arg1 ;
-(void)_setMainDocumentError:(id)arg1 ;
-(void)_revertToProvisionalState;
-(void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(BOOL)arg2 ;
-(BOOL)_isDocumentHTML;
-(void)_makeRepresentation;
-(DocumentLoader*)_documentLoader;
-(id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>*)arg1 ;
-(id)_webView;
-(id)_responseMIMEType;
-(id)_mainDocumentError;
-(void)_addSubframeArchives:(id)arg1 ;
-(void)_setDeferMainResourceDataLoad:(BOOL)arg1 ;
-(void)_setOverrideTextEncodingName:(id)arg1 ;
-(void)_setAllowToBeMemoryMapped;
-(void)setDataSourceDelegate:(id)arg1 ;
-(id)dataSourceDelegate;
-(void)_setRepresentation:(id)arg1 ;
-(void)dealloc;
-(NSMutableURLRequest *)request;
-(id<WebDocumentRepresentation>)representation;
-(NSData *)data;
-(NSURLResponse *)response;
-(WebFrame *)webFrame;
-(BOOL)isLoading;
-(id)initWithRequest:(id)arg1 ;
-(WebArchive *)webArchive;
-(NSURL *)unreachableURL;
-(NSString *)pageTitle;
-(void)finalize;
-(id)subresourceForURL:(id)arg1 ;
-(WebResource *)mainResource;
-(void)addSubresource:(id)arg1 ;
-(NSString *)textEncodingName;
-(NSURLRequest *)initialRequest;
-(NSArray *)subresources;
@end

