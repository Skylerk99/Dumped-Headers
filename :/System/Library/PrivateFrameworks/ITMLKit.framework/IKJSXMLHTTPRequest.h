/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/IKJSXMLHTTPRequest.h>
@class NSString, IKDOMDocument, NSDictionary;


@protocol IKJSXMLHTTPRequest <IKJSEventListenerObject,JSExport>
@property (assign) unsigned long long timeout; 
@property (readonly) unsigned readyState; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
@property (readonly) NSString * responseText; 
@property (readonly) IKDOMDocument * responseXML; 
@property (retain) NSString * responseType; 
@property (readonly) id response; 
@property (readonly) NSDictionary * metrics; 
@required
-(void)send:(id)arg1;
-(unsigned long long)timeout;
-(id)init;
-(NSDictionary *)metrics;
-(id)response;
-(unsigned)status;
-(void)setResponseType:(id)arg1;
-(void)setTimeout:(unsigned long long)arg1;
-(void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
-(void)setRequestHeader:(id)arg1 :(id)arg2;
-(void)abort;
-(IKDOMDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1;
-(unsigned)readyState;
-(NSString *)responseText;
-(NSString *)responseType;
-(NSString *)statusText;

@end


@class NSString, IKDOMDocument, NSDictionary, ISURLOperation, NSMutableArray, NSMutableURLRequest, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSError, JSManagedValue;

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <ISStoreURLOperationDelegate, IKJSXMLHTTPRequest> {

	BOOL _shouldSquashOnReadyStateEvents;
	int _onReadyStateChangeMessageQueueLock;
	BOOL _async;
	BOOL _inProgress;
	BOOL _jingleRequest;
	BOOL _primeEnabled;
	unsigned _requestStatusCode;
	unsigned _readyState;
	unsigned _status;
	unsigned long long timeout;
	NSString* _dataToSend;
	ISURLOperation* _jingleOperation;
	NSMutableArray* _onReadyStateChangeMessageQueue;
	NSMutableURLRequest* _urlRequest;
	NSURLConnection* _urlConnection;
	NSString* _user;
	NSString* _password;
	long long _primeRetryCount;
	NSHTTPURLResponse* _urlResponse;
	NSMutableData* _receivedData;
	long long _reprimingResponseStatus;
	long long _requestReadyState;
	NSString* _requestStatusText;
	long long _requestResponseType;
	NSError* _requestError;
	NSString* _statusText;
	NSDictionary* _performanceMetrics;
	JSManagedValue* _managedSelf;

}

@property (nonatomic,copy) NSString * dataToSend;                                          //@synthesize dataToSend=_dataToSend - In the implementation block
@property (assign,nonatomic) BOOL jingleRequest;                                           //@synthesize jingleRequest=_jingleRequest - In the implementation block
@property (assign,nonatomic,__weak) ISURLOperation * jingleOperation;                      //@synthesize jingleOperation=_jingleOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * onReadyStateChangeMessageQueue;              //@synthesize onReadyStateChangeMessageQueue=_onReadyStateChangeMessageQueue - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;                             //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) NSURLConnection * urlConnection;                              //@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,retain) NSString * user;                                              //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) long long primeRetryCount;                                    //@synthesize primeRetryCount=_primeRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL primeEnabled;                                          //@synthesize primeEnabled=_primeEnabled - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * urlResponse;                              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                                 //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,readonly) long long reprimingResponseStatus;                          //@synthesize reprimingResponseStatus=_reprimingResponseStatus - In the implementation block
@property (assign,nonatomic) long long requestReadyState;                                  //@synthesize requestReadyState=_requestReadyState - In the implementation block
@property (assign,nonatomic) unsigned requestStatusCode;                                   //@synthesize requestStatusCode=_requestStatusCode - In the implementation block
@property (nonatomic,retain) NSString * requestStatusText;                                 //@synthesize requestStatusText=_requestStatusText - In the implementation block
@property (assign,nonatomic) long long requestResponseType;                                //@synthesize requestResponseType=_requestResponseType - In the implementation block
@property (nonatomic,retain) NSError * requestError;                                       //@synthesize requestError=_requestError - In the implementation block
@property (assign) unsigned readyState;                                                    //@synthesize readyState=_readyState - In the implementation block
@property (assign) unsigned status;                                                        //@synthesize status=_status - In the implementation block
@property (retain) NSString * statusText;                                                  //@synthesize statusText=_statusText - In the implementation block
@property (retain) NSDictionary * performanceMetrics;                                      //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedSelf;                                 //@synthesize managedSelf=_managedSelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long timeout; 
@property (readonly) NSString * responseText; 
@property (readonly) IKDOMDocument * responseXML; 
@property (retain) NSString * responseType; 
@property (readonly) id response; 
@property (readonly) NSDictionary * metrics; 
+(id)xhrOperationQueue;
-(NSString *)user;
-(NSString *)password;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)send:(id)arg1 ;
-(unsigned long long)timeout;
-(NSHTTPURLResponse *)urlResponse;
-(void)setStatusText:(NSString *)arg1 ;
-(id)init;
-(NSDictionary *)metrics;
-(id)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)_abort;
-(void)setResponseType:(NSString *)arg1 ;
-(void)_operationFinished:(id)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithAppContext:(id)arg1 jingleRequest:(BOOL)arg2 ;
-(JSManagedValue *)managedSelf;
-(void)setManagedSelf:(JSManagedValue *)arg1 ;
-(void)_setException:(id)arg1 ;
-(void)_openWithMethod:(id)arg1 url:(id)arg2 async:(BOOL)arg3 user:(id)arg4 password:(id)arg5 ;
-(long long)requestReadyState;
-(void)_sendWithData:(id)arg1 ;
-(NSError *)requestError;
-(NSMutableData *)receivedData;
-(long long)requestResponseType;
-(id)responseBlob;
-(unsigned)requestStatusCode;
-(NSString *)requestStatusText;
-(id)_dequeueReadyStateChangeMessage;
-(id)_constructProgressEventData;
-(NSURLConnection *)urlConnection;
-(void)setUrlConnection:(NSURLConnection *)arg1 ;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)setRequestReadyState:(long long)arg1 ;
-(BOOL)jingleRequest;
-(void)_prime:(id)arg1 ;
-(id)_createStoreOperation:(id)arg1 ;
-(void)setJingleOperation:(ISURLOperation *)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(void)setRequestStatusCode:(unsigned)arg1 ;
-(void)setRequestStatusText:(NSString *)arg1 ;
-(void)setRequestError:(NSError *)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(ISURLOperation *)jingleOperation;
-(void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
-(void)setDataToSend:(NSString *)arg1 ;
-(id)_timeIntervalSince1970;
-(void)setPerformanceMetrics:(NSDictionary *)arg1 ;
-(BOOL)_isPrimeError:(long long)arg1 output:(id)arg2 ;
-(void)_reprime:(id)arg1 ;
-(long long)primeRetryCount;
-(void)setPrimeRetryCount:(long long)arg1 ;
-(NSString *)dataToSend;
-(void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 ;
-(void)setRequestHeader:(id)arg1 :(id)arg2 ;
-(void)setJingleRequest:(BOOL)arg1 ;
-(NSMutableArray *)onReadyStateChangeMessageQueue;
-(void)setOnReadyStateChangeMessageQueue:(NSMutableArray *)arg1 ;
-(BOOL)primeEnabled;
-(long long)reprimingResponseStatus;
-(void)setRequestResponseType:(long long)arg1 ;
-(void)abort;
-(NSMutableURLRequest *)urlRequest;
-(void)setReadyState:(unsigned)arg1 ;
-(IKDOMDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1 ;
-(unsigned)readyState;
-(NSString *)responseText;
-(NSString *)responseType;
-(NSString *)statusText;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(NSDictionary *)performanceMetrics;
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2 ;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end

