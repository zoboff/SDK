

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Apr 10 14:51:14 2018
 */
/* Compiler settings for TrueConf_CallX.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TrueConf_CallX_h_h__
#define __TrueConf_CallX_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITrueConfCallX_FWD_DEFINED__
#define __ITrueConfCallX_FWD_DEFINED__
typedef interface ITrueConfCallX ITrueConfCallX;

#endif 	/* __ITrueConfCallX_FWD_DEFINED__ */


#ifndef ___ITrueConfCallXEvents_FWD_DEFINED__
#define ___ITrueConfCallXEvents_FWD_DEFINED__
typedef interface _ITrueConfCallXEvents _ITrueConfCallXEvents;

#endif 	/* ___ITrueConfCallXEvents_FWD_DEFINED__ */


#ifndef __TrueConfCallX_FWD_DEFINED__
#define __TrueConfCallX_FWD_DEFINED__

#ifdef __cplusplus
typedef class TrueConfCallX TrueConfCallX;
#else
typedef struct TrueConfCallX TrueConfCallX;
#endif /* __cplusplus */

#endif 	/* __TrueConfCallX_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITrueConfCallX_INTERFACE_DEFINED__
#define __ITrueConfCallX_INTERFACE_DEFINED__

/* interface ITrueConfCallX */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITrueConfCallX;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C10C07D-A35F-495A-BC37-7EF9FD4D6E66")
    ITrueConfCallX : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE XExecuteCommand( 
            /* [in] */ BSTR cmd) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CallXPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CallXPath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE XRestart( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XSelectCamera( 
            /* [in] */ BSTR cameraName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetCameraList( 
            /* [retval][out] */ BSTR *cameras) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Camera( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XDeselectCamera( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetMicList( 
            /* [retval][out] */ BSTR *microphones) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetSpeakerList( 
            /* [retval][out] */ BSTR *speakers) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Microphone( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Microphone( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Speaker( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Speaker( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XDeselectMic( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XDeselectSpeaker( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XHangUpForAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XSetBackgroundImage( 
            /* [in] */ BSTR imgPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE XCheckForEvent( 
            /* [in] */ BSTR notificationData,
            /* [in] */ BSTR eventName,
            /* [retval][out] */ VARIANT_BOOL *eventDetected) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XStartPictureBroadcast( 
            /* [in] */ BSTR imgPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XStopPictureBroadcast( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE accept( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE acceptPeer( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE acceptPodiumInvite( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE acceptPodiumRequest( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE activateLicense( 
            /* [in] */ BSTR licenseKey) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addContactToAbook( 
            /* [in] */ BSTR callId,
            /* [in] */ BSTR displayName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE allowRecord( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE appUpdate( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE call( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE changeVideoMatrix( 
            /* [in] */ BSTR jsonMatrix) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE connectToServer( 
            /* [in] */ BSTR serverStr) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createConference( 
            /* [in] */ BSTR confName,
            /* [in] */ BSTR type,
            /* [in] */ VARIANT_BOOL autoAccept,
            /* [in] */ BSTR users) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE forbidRecord( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE extendUidTtl( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAbook( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAppState( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getAudioMute( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getSelfieBroadcast( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getDisplayNameById( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getParticipantsList( 
            /* [retval][out] */ BSTR *returnJson) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getContactDetails( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getHardware( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getHardwareKey( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getMaxConfTitleLength( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getMicMute( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getMonitorsInfo( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getIdListRequestInvite( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getModes( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getSettings( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getSystemInfo( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getVideoMatrix( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getVideoMute( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getLicenseType( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE gotoPodium( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hangUp( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE hangUp2( 
            /* [in] */ VARIANT_BOOL forAll) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE inviteToConference( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE inviteToPodium( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeFromPodium( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removePeer( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE leavePodium( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE login( 
            /* [in] */ BSTR login,
            /* [in] */ BSTR password) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE logout( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzRight( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzLeft( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzUp( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzDown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzZoomIn( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzZoomOut( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE reject( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE rejectPeer( 
            /* [in] */ BSTR peerId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE rejectInvitationToPodium( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE rejectRequestToPodium( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeContactFromAbook( 
            /* [in] */ BSTR callId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setAudioMute( 
            /* [in] */ VARIANT_BOOL mute) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setSelfieBroadcast( 
            /* [in] */ BSTR paramsInJSON) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setHardware( 
            /* [in] */ BSTR hardwareInJson) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setMicMute( 
            /* [in] */ VARIANT_BOOL mute) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setModes( 
            /* [in] */ BSTR pin,
            /* [in] */ BSTR mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setSettings( 
            /* [in] */ BSTR settingsInJson) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setVideoMute( 
            /* [in] */ VARIANT_BOOL mute) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE shutdown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE shutdown2( 
            /* [in] */ VARIANT_BOOL forAll) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE startScreenCapture( 
            /* [in] */ BSTR id) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE startAudioRemark( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stopScreenCapture( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XSetCameraByIndex( 
            /* [in] */ LONG cameraIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetCameraByIndex( 
            /* [in] */ LONG cameraIdx,
            /* [retval][out] */ BSTR *cameraName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetCameraCount( 
            /* [retval][out] */ LONG *camerasCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XSelectMicByIndex( 
            /* [in] */ LONG microphoneIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XSelectSpeakerByIndex( 
            /* [in] */ LONG speakerIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetMicByIndex( 
            /* [in] */ LONG microphoneIdx,
            /* [retval][out] */ BSTR *microphoneName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetSpeakerByIndex( 
            /* [in] */ LONG speakerIdx,
            /* [retval][out] */ BSTR *speakerName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetMicCount( 
            /* [retval][out] */ LONG *microphonesCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetSpeakerCount( 
            /* [retval][out] */ LONG *speakersCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XAddSlide( 
            /* [in] */ BSTR imgPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XRemoveSlide( 
            /* [in] */ LONG imgIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE startSlideShow( 
            /* [in] */ BSTR slideShowName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE showSlide( 
            /* [in] */ LONG slideIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE nextSlide( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE prevSlide( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE firstSlide( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE lastSlide( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveSlideUp( 
            /* [in] */ LONG slideIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE moveSlideDown( 
            /* [in] */ LONG slideIdx) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE stopSlideShow( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getSlideShowInfo( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE switchVideoStream( 
            /* [in] */ BSTR peerId,
            /* [in] */ VARIANT_BOOL mainCamera) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XAddSlidesDialog( 
            /* [retval][out] */ ULONG *errorCode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_XCommandLine( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_XCommandLine( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XForceRestart( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetHandle( 
            /* [retval][out] */ ULONG *handle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE takePicture( 
            /* [in] */ BSTR outputFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ptzStop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileSend( 
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR filePath,
            /* [in] */ BSTR fileCaption,
            /* [retval][out] */ LONG *resId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileAccept( 
            /* [in] */ LONG fileId,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileTransferAvailable( 
            /* [retval][out] */ VARIANT_BOOL *available) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileStatsInfo( 
            /* [in] */ LONG fileId,
            /* [out] */ LONG *size,
            /* [out] */ LONG *downloaded,
            /* [out] */ LONG *uploaded,
            /* [out] */ LONG *u_speed,
            /* [out] */ LONG *d_speed,
            /* [out] */ LONG *peers,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileSendAbort( 
            /* [in] */ LONG fileId,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileReject( 
            /* [in] */ LONG fileId,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetFileSendStatus( 
            /* [in] */ LONG id,
            /* [retval][out] */ LONG *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileDelete( 
            /* [in] */ LONG fileID,
            /* [retval][out] */ VARIANT_BOOL *success) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetFileHashById( 
            /* [in] */ LONG fileID,
            /* [retval][out] */ BSTR *hash) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetFileIdByHash( 
            /* [in] */ BSTR hash,
            /* [retval][out] */ LONG *fileID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetFileDownloadPath( 
            /* [in] */ LONG fileID,
            /* [retval][out] */ BSTR *filePath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetFileTransferList( 
            /* [retval][out] */ BSTR *files) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE sendCommand( 
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR cmd) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XRemotePrintPdf( 
            /* [in] */ BSTR peerId,
            /* [in] */ LONG fileId,
            /* [retval][out] */ LONG *retCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XPrintPdf( 
            /* [in] */ BSTR filePath,
            /* [retval][out] */ LONG *retCode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XGetCallXProcessId( 
            /* [retval][out] */ LONG *pid) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE XFileSendToConference( 
            /* [in] */ BSTR filePath,
            /* [in] */ BSTR fileCaption,
            /* [retval][out] */ LONG *resId) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addToAbook( 
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR displayName,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE renameInAbook( 
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR newDisplayName,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeFromAbook( 
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE block( 
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE unblock( 
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getBanList( 
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE createGroup( 
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeGroup( 
            /* [in] */ LONG groupId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE renameGroup( 
            /* [in] */ LONG groupId,
            /* [in] */ BSTR newGroupName,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE addToGroup( 
            /* [in] */ LONG groupId,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE removeFromGroup( 
            /* [in] */ LONG groupId,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getGroups( 
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE testAudioRenderer( 
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE testAudioCapturerStart( 
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE testAudioCapturerStop( 
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE toneDial( 
            /* [in] */ BSTR symbol,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE sendMessage( 
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR message,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE sendGroupMessage( 
            /* [in] */ BSTR message,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE chatClear( 
            /* [in] */ BSTR chatId,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getListOfChats( 
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getChatLastMessages( 
            /* [in] */ BSTR chatId,
            /* [in] */ LONG count,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE getCallHistory( 
            /* [in] */ LONG count,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setLastCallsViewed( 
            /* [retval][out] */ BSTR *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITrueConfCallXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrueConfCallX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrueConfCallX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrueConfCallX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITrueConfCallX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITrueConfCallX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITrueConfCallX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITrueConfCallX * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *XExecuteCommand )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR cmd);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CallXPath )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CallXPath )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *XRestart )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XSelectCamera )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR cameraName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetCameraList )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *cameras);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Camera )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XDeselectCamera )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetMicList )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *microphones);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetSpeakerList )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *speakers);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Microphone )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Microphone )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Speaker )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Speaker )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XDeselectMic )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XDeselectSpeaker )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XHangUpForAll )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XSetBackgroundImage )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR imgPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *XCheckForEvent )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR notificationData,
            /* [in] */ BSTR eventName,
            /* [retval][out] */ VARIANT_BOOL *eventDetected);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XStartPictureBroadcast )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR imgPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XStopPictureBroadcast )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *accept )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *acceptPeer )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *acceptPodiumInvite )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *acceptPodiumRequest )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *activateLicense )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR licenseKey);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *addContactToAbook )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR callId,
            /* [in] */ BSTR displayName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *allowRecord )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *appUpdate )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *call )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *changeVideoMatrix )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR jsonMatrix);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *connectToServer )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR serverStr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createConference )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR confName,
            /* [in] */ BSTR type,
            /* [in] */ VARIANT_BOOL autoAccept,
            /* [in] */ BSTR users);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *forbidRecord )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *extendUidTtl )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAbook )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAppState )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getAudioMute )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getSelfieBroadcast )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getDisplayNameById )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getParticipantsList )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *returnJson);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getContactDetails )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getHardware )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getHardwareKey )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMaxConfTitleLength )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMicMute )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getMonitorsInfo )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getIdListRequestInvite )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getModes )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getSettings )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getSystemInfo )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getVideoMatrix )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getVideoMute )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getLicenseType )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *gotoPodium )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *hangUp )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *hangUp2 )( 
            ITrueConfCallX * This,
            /* [in] */ VARIANT_BOOL forAll);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *inviteToConference )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *inviteToPodium )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removeFromPodium )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removePeer )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *leavePodium )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *login )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR login,
            /* [in] */ BSTR password);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *logout )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzRight )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzLeft )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzUp )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzDown )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzZoomIn )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzZoomOut )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *reject )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *rejectPeer )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *rejectInvitationToPodium )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *rejectRequestToPodium )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removeContactFromAbook )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR callId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setAudioMute )( 
            ITrueConfCallX * This,
            /* [in] */ VARIANT_BOOL mute);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setSelfieBroadcast )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR paramsInJSON);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setHardware )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR hardwareInJson);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setMicMute )( 
            ITrueConfCallX * This,
            /* [in] */ VARIANT_BOOL mute);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setModes )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR pin,
            /* [in] */ BSTR mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setSettings )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR settingsInJson);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setVideoMute )( 
            ITrueConfCallX * This,
            /* [in] */ VARIANT_BOOL mute);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *shutdown )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *shutdown2 )( 
            ITrueConfCallX * This,
            /* [in] */ VARIANT_BOOL forAll);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *startScreenCapture )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR id);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *startAudioRemark )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stopScreenCapture )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XSetCameraByIndex )( 
            ITrueConfCallX * This,
            /* [in] */ LONG cameraIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetCameraByIndex )( 
            ITrueConfCallX * This,
            /* [in] */ LONG cameraIdx,
            /* [retval][out] */ BSTR *cameraName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetCameraCount )( 
            ITrueConfCallX * This,
            /* [retval][out] */ LONG *camerasCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XSelectMicByIndex )( 
            ITrueConfCallX * This,
            /* [in] */ LONG microphoneIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XSelectSpeakerByIndex )( 
            ITrueConfCallX * This,
            /* [in] */ LONG speakerIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetMicByIndex )( 
            ITrueConfCallX * This,
            /* [in] */ LONG microphoneIdx,
            /* [retval][out] */ BSTR *microphoneName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetSpeakerByIndex )( 
            ITrueConfCallX * This,
            /* [in] */ LONG speakerIdx,
            /* [retval][out] */ BSTR *speakerName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetMicCount )( 
            ITrueConfCallX * This,
            /* [retval][out] */ LONG *microphonesCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetSpeakerCount )( 
            ITrueConfCallX * This,
            /* [retval][out] */ LONG *speakersCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XAddSlide )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR imgPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XRemoveSlide )( 
            ITrueConfCallX * This,
            /* [in] */ LONG imgIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *startSlideShow )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR slideShowName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *showSlide )( 
            ITrueConfCallX * This,
            /* [in] */ LONG slideIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *nextSlide )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *prevSlide )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *firstSlide )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *lastSlide )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *moveSlideUp )( 
            ITrueConfCallX * This,
            /* [in] */ LONG slideIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *moveSlideDown )( 
            ITrueConfCallX * This,
            /* [in] */ LONG slideIdx);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *stopSlideShow )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getSlideShowInfo )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *switchVideoStream )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ VARIANT_BOOL mainCamera);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XAddSlidesDialog )( 
            ITrueConfCallX * This,
            /* [retval][out] */ ULONG *errorCode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XCommandLine )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XCommandLine )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XForceRestart )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetHandle )( 
            ITrueConfCallX * This,
            /* [retval][out] */ ULONG *handle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *takePicture )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR outputFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ptzStop )( 
            ITrueConfCallX * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileSend )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR filePath,
            /* [in] */ BSTR fileCaption,
            /* [retval][out] */ LONG *resId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileAccept )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileId,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileTransferAvailable )( 
            ITrueConfCallX * This,
            /* [retval][out] */ VARIANT_BOOL *available);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileStatsInfo )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileId,
            /* [out] */ LONG *size,
            /* [out] */ LONG *downloaded,
            /* [out] */ LONG *uploaded,
            /* [out] */ LONG *u_speed,
            /* [out] */ LONG *d_speed,
            /* [out] */ LONG *peers,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileSendAbort )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileId,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileReject )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileId,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetFileSendStatus )( 
            ITrueConfCallX * This,
            /* [in] */ LONG id,
            /* [retval][out] */ LONG *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileDelete )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileID,
            /* [retval][out] */ VARIANT_BOOL *success);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetFileHashById )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileID,
            /* [retval][out] */ BSTR *hash);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetFileIdByHash )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR hash,
            /* [retval][out] */ LONG *fileID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetFileDownloadPath )( 
            ITrueConfCallX * This,
            /* [in] */ LONG fileID,
            /* [retval][out] */ BSTR *filePath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetFileTransferList )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *files);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *sendCommand )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR cmd);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XRemotePrintPdf )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ LONG fileId,
            /* [retval][out] */ LONG *retCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XPrintPdf )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR filePath,
            /* [retval][out] */ LONG *retCode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XGetCallXProcessId )( 
            ITrueConfCallX * This,
            /* [retval][out] */ LONG *pid);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *XFileSendToConference )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR filePath,
            /* [in] */ BSTR fileCaption,
            /* [retval][out] */ LONG *resId);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *addToAbook )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR displayName,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *renameInAbook )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR newDisplayName,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removeFromAbook )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *block )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *unblock )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getBanList )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *createGroup )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removeGroup )( 
            ITrueConfCallX * This,
            /* [in] */ LONG groupId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *renameGroup )( 
            ITrueConfCallX * This,
            /* [in] */ LONG groupId,
            /* [in] */ BSTR newGroupName,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *addToGroup )( 
            ITrueConfCallX * This,
            /* [in] */ LONG groupId,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *removeFromGroup )( 
            ITrueConfCallX * This,
            /* [in] */ LONG groupId,
            /* [in] */ BSTR peerId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getGroups )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *testAudioRenderer )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *testAudioCapturerStart )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *testAudioCapturerStop )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *toneDial )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR symbol,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *sendMessage )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR peerId,
            /* [in] */ BSTR message,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *sendGroupMessage )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR message,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *chatClear )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR chatId,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getListOfChats )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getChatLastMessages )( 
            ITrueConfCallX * This,
            /* [in] */ BSTR chatId,
            /* [in] */ LONG count,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *getCallHistory )( 
            ITrueConfCallX * This,
            /* [in] */ LONG count,
            /* [retval][out] */ BSTR *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setLastCallsViewed )( 
            ITrueConfCallX * This,
            /* [retval][out] */ BSTR *result);
        
        END_INTERFACE
    } ITrueConfCallXVtbl;

    interface ITrueConfCallX
    {
        CONST_VTBL struct ITrueConfCallXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrueConfCallX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrueConfCallX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrueConfCallX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrueConfCallX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITrueConfCallX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITrueConfCallX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITrueConfCallX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITrueConfCallX_XExecuteCommand(This,cmd)	\
    ( (This)->lpVtbl -> XExecuteCommand(This,cmd) ) 

#define ITrueConfCallX_get_CallXPath(This,pVal)	\
    ( (This)->lpVtbl -> get_CallXPath(This,pVal) ) 

#define ITrueConfCallX_put_CallXPath(This,newVal)	\
    ( (This)->lpVtbl -> put_CallXPath(This,newVal) ) 

#define ITrueConfCallX_XRestart(This)	\
    ( (This)->lpVtbl -> XRestart(This) ) 

#define ITrueConfCallX_XSelectCamera(This,cameraName)	\
    ( (This)->lpVtbl -> XSelectCamera(This,cameraName) ) 

#define ITrueConfCallX_XGetCameraList(This,cameras)	\
    ( (This)->lpVtbl -> XGetCameraList(This,cameras) ) 

#define ITrueConfCallX_get_Camera(This,pVal)	\
    ( (This)->lpVtbl -> get_Camera(This,pVal) ) 

#define ITrueConfCallX_put_Camera(This,newVal)	\
    ( (This)->lpVtbl -> put_Camera(This,newVal) ) 

#define ITrueConfCallX_XDeselectCamera(This)	\
    ( (This)->lpVtbl -> XDeselectCamera(This) ) 

#define ITrueConfCallX_XGetMicList(This,microphones)	\
    ( (This)->lpVtbl -> XGetMicList(This,microphones) ) 

#define ITrueConfCallX_XGetSpeakerList(This,speakers)	\
    ( (This)->lpVtbl -> XGetSpeakerList(This,speakers) ) 

#define ITrueConfCallX_get_Microphone(This,pVal)	\
    ( (This)->lpVtbl -> get_Microphone(This,pVal) ) 

#define ITrueConfCallX_put_Microphone(This,newVal)	\
    ( (This)->lpVtbl -> put_Microphone(This,newVal) ) 

#define ITrueConfCallX_get_Speaker(This,pVal)	\
    ( (This)->lpVtbl -> get_Speaker(This,pVal) ) 

#define ITrueConfCallX_put_Speaker(This,newVal)	\
    ( (This)->lpVtbl -> put_Speaker(This,newVal) ) 

#define ITrueConfCallX_XDeselectMic(This)	\
    ( (This)->lpVtbl -> XDeselectMic(This) ) 

#define ITrueConfCallX_XDeselectSpeaker(This)	\
    ( (This)->lpVtbl -> XDeselectSpeaker(This) ) 

#define ITrueConfCallX_XHangUpForAll(This)	\
    ( (This)->lpVtbl -> XHangUpForAll(This) ) 

#define ITrueConfCallX_XSetBackgroundImage(This,imgPath)	\
    ( (This)->lpVtbl -> XSetBackgroundImage(This,imgPath) ) 

#define ITrueConfCallX_XCheckForEvent(This,notificationData,eventName,eventDetected)	\
    ( (This)->lpVtbl -> XCheckForEvent(This,notificationData,eventName,eventDetected) ) 

#define ITrueConfCallX_XStartPictureBroadcast(This,imgPath)	\
    ( (This)->lpVtbl -> XStartPictureBroadcast(This,imgPath) ) 

#define ITrueConfCallX_XStopPictureBroadcast(This)	\
    ( (This)->lpVtbl -> XStopPictureBroadcast(This) ) 

#define ITrueConfCallX_accept(This)	\
    ( (This)->lpVtbl -> accept(This) ) 

#define ITrueConfCallX_acceptPeer(This,peerId)	\
    ( (This)->lpVtbl -> acceptPeer(This,peerId) ) 

#define ITrueConfCallX_acceptPodiumInvite(This)	\
    ( (This)->lpVtbl -> acceptPodiumInvite(This) ) 

#define ITrueConfCallX_acceptPodiumRequest(This)	\
    ( (This)->lpVtbl -> acceptPodiumRequest(This) ) 

#define ITrueConfCallX_activateLicense(This,licenseKey)	\
    ( (This)->lpVtbl -> activateLicense(This,licenseKey) ) 

#define ITrueConfCallX_addContactToAbook(This,callId,displayName)	\
    ( (This)->lpVtbl -> addContactToAbook(This,callId,displayName) ) 

#define ITrueConfCallX_allowRecord(This)	\
    ( (This)->lpVtbl -> allowRecord(This) ) 

#define ITrueConfCallX_appUpdate(This)	\
    ( (This)->lpVtbl -> appUpdate(This) ) 

#define ITrueConfCallX_call(This,peerId)	\
    ( (This)->lpVtbl -> call(This,peerId) ) 

#define ITrueConfCallX_changeVideoMatrix(This,jsonMatrix)	\
    ( (This)->lpVtbl -> changeVideoMatrix(This,jsonMatrix) ) 

#define ITrueConfCallX_connectToServer(This,serverStr)	\
    ( (This)->lpVtbl -> connectToServer(This,serverStr) ) 

#define ITrueConfCallX_createConference(This,confName,type,autoAccept,users)	\
    ( (This)->lpVtbl -> createConference(This,confName,type,autoAccept,users) ) 

#define ITrueConfCallX_forbidRecord(This)	\
    ( (This)->lpVtbl -> forbidRecord(This) ) 

#define ITrueConfCallX_extendUidTtl(This)	\
    ( (This)->lpVtbl -> extendUidTtl(This) ) 

#define ITrueConfCallX_getAbook(This)	\
    ( (This)->lpVtbl -> getAbook(This) ) 

#define ITrueConfCallX_getAppState(This)	\
    ( (This)->lpVtbl -> getAppState(This) ) 

#define ITrueConfCallX_getAudioMute(This)	\
    ( (This)->lpVtbl -> getAudioMute(This) ) 

#define ITrueConfCallX_getSelfieBroadcast(This)	\
    ( (This)->lpVtbl -> getSelfieBroadcast(This) ) 

#define ITrueConfCallX_getDisplayNameById(This,peerId)	\
    ( (This)->lpVtbl -> getDisplayNameById(This,peerId) ) 

#define ITrueConfCallX_getParticipantsList(This,returnJson)	\
    ( (This)->lpVtbl -> getParticipantsList(This,returnJson) ) 

#define ITrueConfCallX_getContactDetails(This,peerId)	\
    ( (This)->lpVtbl -> getContactDetails(This,peerId) ) 

#define ITrueConfCallX_getHardware(This)	\
    ( (This)->lpVtbl -> getHardware(This) ) 

#define ITrueConfCallX_getHardwareKey(This)	\
    ( (This)->lpVtbl -> getHardwareKey(This) ) 

#define ITrueConfCallX_getMaxConfTitleLength(This)	\
    ( (This)->lpVtbl -> getMaxConfTitleLength(This) ) 

#define ITrueConfCallX_getMicMute(This)	\
    ( (This)->lpVtbl -> getMicMute(This) ) 

#define ITrueConfCallX_getMonitorsInfo(This)	\
    ( (This)->lpVtbl -> getMonitorsInfo(This) ) 

#define ITrueConfCallX_getIdListRequestInvite(This)	\
    ( (This)->lpVtbl -> getIdListRequestInvite(This) ) 

#define ITrueConfCallX_getModes(This)	\
    ( (This)->lpVtbl -> getModes(This) ) 

#define ITrueConfCallX_getSettings(This)	\
    ( (This)->lpVtbl -> getSettings(This) ) 

#define ITrueConfCallX_getSystemInfo(This)	\
    ( (This)->lpVtbl -> getSystemInfo(This) ) 

#define ITrueConfCallX_getVideoMatrix(This)	\
    ( (This)->lpVtbl -> getVideoMatrix(This) ) 

#define ITrueConfCallX_getVideoMute(This)	\
    ( (This)->lpVtbl -> getVideoMute(This) ) 

#define ITrueConfCallX_getLicenseType(This)	\
    ( (This)->lpVtbl -> getLicenseType(This) ) 

#define ITrueConfCallX_gotoPodium(This)	\
    ( (This)->lpVtbl -> gotoPodium(This) ) 

#define ITrueConfCallX_hangUp(This)	\
    ( (This)->lpVtbl -> hangUp(This) ) 

#define ITrueConfCallX_hangUp2(This,forAll)	\
    ( (This)->lpVtbl -> hangUp2(This,forAll) ) 

#define ITrueConfCallX_inviteToConference(This,peerId)	\
    ( (This)->lpVtbl -> inviteToConference(This,peerId) ) 

#define ITrueConfCallX_inviteToPodium(This,peerId)	\
    ( (This)->lpVtbl -> inviteToPodium(This,peerId) ) 

#define ITrueConfCallX_removeFromPodium(This,peerId)	\
    ( (This)->lpVtbl -> removeFromPodium(This,peerId) ) 

#define ITrueConfCallX_removePeer(This,peerId)	\
    ( (This)->lpVtbl -> removePeer(This,peerId) ) 

#define ITrueConfCallX_leavePodium(This)	\
    ( (This)->lpVtbl -> leavePodium(This) ) 

#define ITrueConfCallX_login(This,login,password)	\
    ( (This)->lpVtbl -> login(This,login,password) ) 

#define ITrueConfCallX_logout(This)	\
    ( (This)->lpVtbl -> logout(This) ) 

#define ITrueConfCallX_ptzRight(This)	\
    ( (This)->lpVtbl -> ptzRight(This) ) 

#define ITrueConfCallX_ptzLeft(This)	\
    ( (This)->lpVtbl -> ptzLeft(This) ) 

#define ITrueConfCallX_ptzUp(This)	\
    ( (This)->lpVtbl -> ptzUp(This) ) 

#define ITrueConfCallX_ptzDown(This)	\
    ( (This)->lpVtbl -> ptzDown(This) ) 

#define ITrueConfCallX_ptzZoomIn(This)	\
    ( (This)->lpVtbl -> ptzZoomIn(This) ) 

#define ITrueConfCallX_ptzZoomOut(This)	\
    ( (This)->lpVtbl -> ptzZoomOut(This) ) 

#define ITrueConfCallX_reject(This)	\
    ( (This)->lpVtbl -> reject(This) ) 

#define ITrueConfCallX_rejectPeer(This,peerId)	\
    ( (This)->lpVtbl -> rejectPeer(This,peerId) ) 

#define ITrueConfCallX_rejectInvitationToPodium(This)	\
    ( (This)->lpVtbl -> rejectInvitationToPodium(This) ) 

#define ITrueConfCallX_rejectRequestToPodium(This)	\
    ( (This)->lpVtbl -> rejectRequestToPodium(This) ) 

#define ITrueConfCallX_removeContactFromAbook(This,callId)	\
    ( (This)->lpVtbl -> removeContactFromAbook(This,callId) ) 

#define ITrueConfCallX_setAudioMute(This,mute)	\
    ( (This)->lpVtbl -> setAudioMute(This,mute) ) 

#define ITrueConfCallX_setSelfieBroadcast(This,paramsInJSON)	\
    ( (This)->lpVtbl -> setSelfieBroadcast(This,paramsInJSON) ) 

#define ITrueConfCallX_setHardware(This,hardwareInJson)	\
    ( (This)->lpVtbl -> setHardware(This,hardwareInJson) ) 

#define ITrueConfCallX_setMicMute(This,mute)	\
    ( (This)->lpVtbl -> setMicMute(This,mute) ) 

#define ITrueConfCallX_setModes(This,pin,mode)	\
    ( (This)->lpVtbl -> setModes(This,pin,mode) ) 

#define ITrueConfCallX_setSettings(This,settingsInJson)	\
    ( (This)->lpVtbl -> setSettings(This,settingsInJson) ) 

#define ITrueConfCallX_setVideoMute(This,mute)	\
    ( (This)->lpVtbl -> setVideoMute(This,mute) ) 

#define ITrueConfCallX_shutdown(This)	\
    ( (This)->lpVtbl -> shutdown(This) ) 

#define ITrueConfCallX_shutdown2(This,forAll)	\
    ( (This)->lpVtbl -> shutdown2(This,forAll) ) 

#define ITrueConfCallX_startScreenCapture(This,id)	\
    ( (This)->lpVtbl -> startScreenCapture(This,id) ) 

#define ITrueConfCallX_startAudioRemark(This)	\
    ( (This)->lpVtbl -> startAudioRemark(This) ) 

#define ITrueConfCallX_stopScreenCapture(This)	\
    ( (This)->lpVtbl -> stopScreenCapture(This) ) 

#define ITrueConfCallX_XSetCameraByIndex(This,cameraIdx)	\
    ( (This)->lpVtbl -> XSetCameraByIndex(This,cameraIdx) ) 

#define ITrueConfCallX_XGetCameraByIndex(This,cameraIdx,cameraName)	\
    ( (This)->lpVtbl -> XGetCameraByIndex(This,cameraIdx,cameraName) ) 

#define ITrueConfCallX_XGetCameraCount(This,camerasCount)	\
    ( (This)->lpVtbl -> XGetCameraCount(This,camerasCount) ) 

#define ITrueConfCallX_XSelectMicByIndex(This,microphoneIdx)	\
    ( (This)->lpVtbl -> XSelectMicByIndex(This,microphoneIdx) ) 

#define ITrueConfCallX_XSelectSpeakerByIndex(This,speakerIdx)	\
    ( (This)->lpVtbl -> XSelectSpeakerByIndex(This,speakerIdx) ) 

#define ITrueConfCallX_XGetMicByIndex(This,microphoneIdx,microphoneName)	\
    ( (This)->lpVtbl -> XGetMicByIndex(This,microphoneIdx,microphoneName) ) 

#define ITrueConfCallX_XGetSpeakerByIndex(This,speakerIdx,speakerName)	\
    ( (This)->lpVtbl -> XGetSpeakerByIndex(This,speakerIdx,speakerName) ) 

#define ITrueConfCallX_XGetMicCount(This,microphonesCount)	\
    ( (This)->lpVtbl -> XGetMicCount(This,microphonesCount) ) 

#define ITrueConfCallX_XGetSpeakerCount(This,speakersCount)	\
    ( (This)->lpVtbl -> XGetSpeakerCount(This,speakersCount) ) 

#define ITrueConfCallX_XAddSlide(This,imgPath)	\
    ( (This)->lpVtbl -> XAddSlide(This,imgPath) ) 

#define ITrueConfCallX_XRemoveSlide(This,imgIdx)	\
    ( (This)->lpVtbl -> XRemoveSlide(This,imgIdx) ) 

#define ITrueConfCallX_startSlideShow(This,slideShowName)	\
    ( (This)->lpVtbl -> startSlideShow(This,slideShowName) ) 

#define ITrueConfCallX_showSlide(This,slideIdx)	\
    ( (This)->lpVtbl -> showSlide(This,slideIdx) ) 

#define ITrueConfCallX_nextSlide(This)	\
    ( (This)->lpVtbl -> nextSlide(This) ) 

#define ITrueConfCallX_prevSlide(This)	\
    ( (This)->lpVtbl -> prevSlide(This) ) 

#define ITrueConfCallX_firstSlide(This)	\
    ( (This)->lpVtbl -> firstSlide(This) ) 

#define ITrueConfCallX_lastSlide(This)	\
    ( (This)->lpVtbl -> lastSlide(This) ) 

#define ITrueConfCallX_moveSlideUp(This,slideIdx)	\
    ( (This)->lpVtbl -> moveSlideUp(This,slideIdx) ) 

#define ITrueConfCallX_moveSlideDown(This,slideIdx)	\
    ( (This)->lpVtbl -> moveSlideDown(This,slideIdx) ) 

#define ITrueConfCallX_stopSlideShow(This)	\
    ( (This)->lpVtbl -> stopSlideShow(This) ) 

#define ITrueConfCallX_getSlideShowInfo(This)	\
    ( (This)->lpVtbl -> getSlideShowInfo(This) ) 

#define ITrueConfCallX_switchVideoStream(This,peerId,mainCamera)	\
    ( (This)->lpVtbl -> switchVideoStream(This,peerId,mainCamera) ) 

#define ITrueConfCallX_XAddSlidesDialog(This,errorCode)	\
    ( (This)->lpVtbl -> XAddSlidesDialog(This,errorCode) ) 

#define ITrueConfCallX_get_XCommandLine(This,pVal)	\
    ( (This)->lpVtbl -> get_XCommandLine(This,pVal) ) 

#define ITrueConfCallX_put_XCommandLine(This,newVal)	\
    ( (This)->lpVtbl -> put_XCommandLine(This,newVal) ) 

#define ITrueConfCallX_XForceRestart(This)	\
    ( (This)->lpVtbl -> XForceRestart(This) ) 

#define ITrueConfCallX_XGetHandle(This,handle)	\
    ( (This)->lpVtbl -> XGetHandle(This,handle) ) 

#define ITrueConfCallX_takePicture(This,outputFileName)	\
    ( (This)->lpVtbl -> takePicture(This,outputFileName) ) 

#define ITrueConfCallX_ptzStop(This)	\
    ( (This)->lpVtbl -> ptzStop(This) ) 

#define ITrueConfCallX_XFileSend(This,peerId,filePath,fileCaption,resId)	\
    ( (This)->lpVtbl -> XFileSend(This,peerId,filePath,fileCaption,resId) ) 

#define ITrueConfCallX_XFileAccept(This,fileId,success)	\
    ( (This)->lpVtbl -> XFileAccept(This,fileId,success) ) 

#define ITrueConfCallX_XFileTransferAvailable(This,available)	\
    ( (This)->lpVtbl -> XFileTransferAvailable(This,available) ) 

#define ITrueConfCallX_XFileStatsInfo(This,fileId,size,downloaded,uploaded,u_speed,d_speed,peers,success)	\
    ( (This)->lpVtbl -> XFileStatsInfo(This,fileId,size,downloaded,uploaded,u_speed,d_speed,peers,success) ) 

#define ITrueConfCallX_XFileSendAbort(This,fileId,success)	\
    ( (This)->lpVtbl -> XFileSendAbort(This,fileId,success) ) 

#define ITrueConfCallX_XFileReject(This,fileId,success)	\
    ( (This)->lpVtbl -> XFileReject(This,fileId,success) ) 

#define ITrueConfCallX_XGetFileSendStatus(This,id,result)	\
    ( (This)->lpVtbl -> XGetFileSendStatus(This,id,result) ) 

#define ITrueConfCallX_XFileDelete(This,fileID,success)	\
    ( (This)->lpVtbl -> XFileDelete(This,fileID,success) ) 

#define ITrueConfCallX_XGetFileHashById(This,fileID,hash)	\
    ( (This)->lpVtbl -> XGetFileHashById(This,fileID,hash) ) 

#define ITrueConfCallX_XGetFileIdByHash(This,hash,fileID)	\
    ( (This)->lpVtbl -> XGetFileIdByHash(This,hash,fileID) ) 

#define ITrueConfCallX_XGetFileDownloadPath(This,fileID,filePath)	\
    ( (This)->lpVtbl -> XGetFileDownloadPath(This,fileID,filePath) ) 

#define ITrueConfCallX_XGetFileTransferList(This,files)	\
    ( (This)->lpVtbl -> XGetFileTransferList(This,files) ) 

#define ITrueConfCallX_sendCommand(This,peerId,cmd)	\
    ( (This)->lpVtbl -> sendCommand(This,peerId,cmd) ) 

#define ITrueConfCallX_XRemotePrintPdf(This,peerId,fileId,retCode)	\
    ( (This)->lpVtbl -> XRemotePrintPdf(This,peerId,fileId,retCode) ) 

#define ITrueConfCallX_XPrintPdf(This,filePath,retCode)	\
    ( (This)->lpVtbl -> XPrintPdf(This,filePath,retCode) ) 

#define ITrueConfCallX_XGetCallXProcessId(This,pid)	\
    ( (This)->lpVtbl -> XGetCallXProcessId(This,pid) ) 

#define ITrueConfCallX_XFileSendToConference(This,filePath,fileCaption,resId)	\
    ( (This)->lpVtbl -> XFileSendToConference(This,filePath,fileCaption,resId) ) 

#define ITrueConfCallX_addToAbook(This,peerId,displayName,result)	\
    ( (This)->lpVtbl -> addToAbook(This,peerId,displayName,result) ) 

#define ITrueConfCallX_renameInAbook(This,peerId,newDisplayName,result)	\
    ( (This)->lpVtbl -> renameInAbook(This,peerId,newDisplayName,result) ) 

#define ITrueConfCallX_removeFromAbook(This,peerId,result)	\
    ( (This)->lpVtbl -> removeFromAbook(This,peerId,result) ) 

#define ITrueConfCallX_block(This,peerId,result)	\
    ( (This)->lpVtbl -> block(This,peerId,result) ) 

#define ITrueConfCallX_unblock(This,peerId,result)	\
    ( (This)->lpVtbl -> unblock(This,peerId,result) ) 

#define ITrueConfCallX_getBanList(This,result)	\
    ( (This)->lpVtbl -> getBanList(This,result) ) 

#define ITrueConfCallX_createGroup(This,name,result)	\
    ( (This)->lpVtbl -> createGroup(This,name,result) ) 

#define ITrueConfCallX_removeGroup(This,groupId,result)	\
    ( (This)->lpVtbl -> removeGroup(This,groupId,result) ) 

#define ITrueConfCallX_renameGroup(This,groupId,newGroupName,result)	\
    ( (This)->lpVtbl -> renameGroup(This,groupId,newGroupName,result) ) 

#define ITrueConfCallX_addToGroup(This,groupId,peerId,result)	\
    ( (This)->lpVtbl -> addToGroup(This,groupId,peerId,result) ) 

#define ITrueConfCallX_removeFromGroup(This,groupId,peerId,result)	\
    ( (This)->lpVtbl -> removeFromGroup(This,groupId,peerId,result) ) 

#define ITrueConfCallX_getGroups(This,result)	\
    ( (This)->lpVtbl -> getGroups(This,result) ) 

#define ITrueConfCallX_testAudioRenderer(This,result)	\
    ( (This)->lpVtbl -> testAudioRenderer(This,result) ) 

#define ITrueConfCallX_testAudioCapturerStart(This,result)	\
    ( (This)->lpVtbl -> testAudioCapturerStart(This,result) ) 

#define ITrueConfCallX_testAudioCapturerStop(This,result)	\
    ( (This)->lpVtbl -> testAudioCapturerStop(This,result) ) 

#define ITrueConfCallX_toneDial(This,symbol,result)	\
    ( (This)->lpVtbl -> toneDial(This,symbol,result) ) 

#define ITrueConfCallX_sendMessage(This,peerId,message,result)	\
    ( (This)->lpVtbl -> sendMessage(This,peerId,message,result) ) 

#define ITrueConfCallX_sendGroupMessage(This,message,result)	\
    ( (This)->lpVtbl -> sendGroupMessage(This,message,result) ) 

#define ITrueConfCallX_chatClear(This,chatId,result)	\
    ( (This)->lpVtbl -> chatClear(This,chatId,result) ) 

#define ITrueConfCallX_getListOfChats(This,result)	\
    ( (This)->lpVtbl -> getListOfChats(This,result) ) 

#define ITrueConfCallX_getChatLastMessages(This,chatId,count,result)	\
    ( (This)->lpVtbl -> getChatLastMessages(This,chatId,count,result) ) 

#define ITrueConfCallX_getCallHistory(This,count,result)	\
    ( (This)->lpVtbl -> getCallHistory(This,count,result) ) 

#define ITrueConfCallX_setLastCallsViewed(This,result)	\
    ( (This)->lpVtbl -> setLastCallsViewed(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XFileSendAbort_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG fileId,
    /* [retval][out] */ VARIANT_BOOL *success);


void __RPC_STUB ITrueConfCallX_XFileSendAbort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XFileReject_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG fileId,
    /* [retval][out] */ VARIANT_BOOL *success);


void __RPC_STUB ITrueConfCallX_XFileReject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XGetFileSendStatus_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG id,
    /* [retval][out] */ LONG *result);


void __RPC_STUB ITrueConfCallX_XGetFileSendStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XFileDelete_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG fileID,
    /* [retval][out] */ VARIANT_BOOL *success);


void __RPC_STUB ITrueConfCallX_XFileDelete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XGetFileHashById_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG fileID,
    /* [retval][out] */ BSTR *hash);


void __RPC_STUB ITrueConfCallX_XGetFileHashById_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XGetFileIdByHash_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR hash,
    /* [retval][out] */ LONG *fileID);


void __RPC_STUB ITrueConfCallX_XGetFileIdByHash_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XGetFileDownloadPath_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG fileID,
    /* [retval][out] */ BSTR *filePath);


void __RPC_STUB ITrueConfCallX_XGetFileDownloadPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XGetFileTransferList_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *files);


void __RPC_STUB ITrueConfCallX_XGetFileTransferList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_sendCommand_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [in] */ BSTR cmd);


void __RPC_STUB ITrueConfCallX_sendCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XRemotePrintPdf_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [in] */ LONG fileId,
    /* [retval][out] */ LONG *retCode);


void __RPC_STUB ITrueConfCallX_XRemotePrintPdf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XPrintPdf_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR filePath,
    /* [retval][out] */ LONG *retCode);


void __RPC_STUB ITrueConfCallX_XPrintPdf_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XGetCallXProcessId_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ LONG *pid);


void __RPC_STUB ITrueConfCallX_XGetCallXProcessId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_XFileSendToConference_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR filePath,
    /* [in] */ BSTR fileCaption,
    /* [retval][out] */ LONG *resId);


void __RPC_STUB ITrueConfCallX_XFileSendToConference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_addToAbook_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [in] */ BSTR displayName,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_addToAbook_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_renameInAbook_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [in] */ BSTR newDisplayName,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_renameInAbook_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_removeFromAbook_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_removeFromAbook_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_block_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_block_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_unblock_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_unblock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_getBanList_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_getBanList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_createGroup_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR name,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_createGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_removeGroup_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG groupId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_removeGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_renameGroup_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG groupId,
    /* [in] */ BSTR newGroupName,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_renameGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_addToGroup_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG groupId,
    /* [in] */ BSTR peerId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_addToGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_removeFromGroup_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG groupId,
    /* [in] */ BSTR peerId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_removeFromGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_getGroups_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_getGroups_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_testAudioRenderer_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_testAudioRenderer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_testAudioCapturerStart_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_testAudioCapturerStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_testAudioCapturerStop_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_testAudioCapturerStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_toneDial_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR symbol,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_toneDial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_sendMessage_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR peerId,
    /* [in] */ BSTR message,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_sendMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_sendGroupMessage_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR message,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_sendGroupMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_chatClear_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR chatId,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_chatClear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_getListOfChats_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_getListOfChats_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_getChatLastMessages_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ BSTR chatId,
    /* [in] */ LONG count,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_getChatLastMessages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_getCallHistory_Proxy( 
    ITrueConfCallX * This,
    /* [in] */ LONG count,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_getCallHistory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITrueConfCallX_setLastCallsViewed_Proxy( 
    ITrueConfCallX * This,
    /* [retval][out] */ BSTR *result);


void __RPC_STUB ITrueConfCallX_setLastCallsViewed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITrueConfCallX_INTERFACE_DEFINED__ */



#ifndef __TrueConf_CallXLib_LIBRARY_DEFINED__
#define __TrueConf_CallXLib_LIBRARY_DEFINED__

/* library TrueConf_CallXLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TrueConf_CallXLib;

#ifndef ___ITrueConfCallXEvents_DISPINTERFACE_DEFINED__
#define ___ITrueConfCallXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ITrueConfCallXEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ITrueConfCallXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0018D12A-35E1-4811-85DC-197D54EB3291")
    _ITrueConfCallXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ITrueConfCallXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ITrueConfCallXEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ITrueConfCallXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ITrueConfCallXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ITrueConfCallXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ITrueConfCallXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ITrueConfCallXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ITrueConfCallXEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ITrueConfCallXEventsVtbl;

    interface _ITrueConfCallXEvents
    {
        CONST_VTBL struct _ITrueConfCallXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ITrueConfCallXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ITrueConfCallXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ITrueConfCallXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ITrueConfCallXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ITrueConfCallXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ITrueConfCallXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ITrueConfCallXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ITrueConfCallXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TrueConfCallX;

#ifdef __cplusplus

class DECLSPEC_UUID("27EF4BA2-4500-4839-B88A-F2F4744FE56A")
TrueConfCallX;
#endif
#endif /* __TrueConf_CallXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


