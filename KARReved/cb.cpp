//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "cb.hpp"
#include "cb.hpp"
#include "fn_DVDReadAbsAsyncForBS.hpp"
#include "cb.hpp"
#include "cb.hpp"
#include "fn_DVDReadAbsAsyncForBS.hpp"
#include "DVDReset.hpp"
#include "cb.hpp"
#include "cb.hpp"
#include "DVDReadDiskID.hpp"



void cb(PPC::Runtime::GCContext* context)
{
/*803C832C 003C512C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C8330 003C5130*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803C8334 003C5134*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C8338 003C5138*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803C833C 003C513C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C8340 003C5140*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*803C8344 003C5144*/ PPC::Runtime::ASM::ble(.L_803C83C0);
/*803C8348 003C5148*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDDF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C834C 003C514C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803C8350 003C5150*/ PPC::Runtime::ASM::beq(.L_803C838C);
/*803C8354 003C5154*/ PPC::Runtime::ASM::bge(.L_803C83F0);
/*803C8358 003C5158*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C835C 003C515C*/ PPC::Runtime::ASM::bge(.L_803C8364);
/*803C8360 003C5160*/ PPC::Runtime::ASM::b(.L_803C83F0);
RUNTIME_PPC_JUMP_LABEL(.L_803C8364, 0x803C8364) //this is a jump label
/*803C8364 003C5164*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C8368 003C5168*/ PPC::Runtime::ASM::lwz(context->r4, bb2_805DDDFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C836C 003C516C*/ PPC::Runtime::ASM::lis(context->r3, cb @ Get_MemoryOffset_HighBit);
/*803C8370 003C5170*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDDF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C8374 003C5174*/ PPC::Runtime::ASM::addi(context->r7, context->r3, cb @ Get_MemoryOffset_LowBit);
/*803C8378 003C5178*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803C837C 003C517C*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*803C8380 003C5180*/ PPC::Runtime::ASM::li(context->r6, 0x420);
/*803C8384 003C5184*/ PPC::Runtime::ASM::bl(fn_DVDReadAbsAsyncForBS);
/*803C8388 003C5188*/ PPC::Runtime::ASM::b(.L_803C83F0);
RUNTIME_PPC_JUMP_LABEL(.L_803C838C, 0x803C838C) //this is a jump label
/*803C838C 003C518C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803C8390 003C5190*/ PPC::Runtime::ASM::lwz(context->r6, bb2_805DDDFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C8394 003C5194*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDDF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C8398 003C5198*/ PPC::Runtime::ASM::lis(context->r3, cb @ Get_MemoryOffset_HighBit);
/*803C839C 003C519C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, cb @ Get_MemoryOffset_LowBit);
/*803C83A0 003C51A0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*803C83A4 003C51A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C83A8 003C51A8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*803C83AC 003C51AC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1f);
/*803C83B0 003C51B0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803C83B4 003C51B4*/ PPC::Runtime::ASM::clrrwi(context->r5, context->r0, 5);
/*803C83B8 003C51B8*/ PPC::Runtime::ASM::bl(fn_DVDReadAbsAsyncForBS);
/*803C83BC 003C51BC*/ PPC::Runtime::ASM::b(.L_803C83F0);
RUNTIME_PPC_JUMP_LABEL(.L_803C83C0, 0x803C83C0) //this is a jump label
/*803C83C0 003C51C0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*803C83C4 003C51C4*/ PPC::Runtime::ASM::beq(.L_803C83F0);
/*803C83C8 003C51C8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x4);
/*803C83CC 003C51CC*/ PPC::Runtime::ASM::bne(.L_803C83F0);
/*803C83D0 003C51D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C83D4 003C51D4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDDF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C83D8 003C51D8*/ PPC::Runtime::ASM::bl(DVDReset);
/*803C83DC 003C51DC*/ PPC::Runtime::ASM::lis(context->r3, cb @ Get_MemoryOffset_HighBit);
/*803C83E0 003C51E0*/ PPC::Runtime::ASM::lwz(context->r4, idTmp_805DDE00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C83E4 003C51E4*/ PPC::Runtime::ASM::addi(context->r5, context->r3, cb @ Get_MemoryOffset_LowBit);
/*803C83E8 003C51E8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803C83EC 003C51EC*/ PPC::Runtime::ASM::bl(DVDReadDiskID);
RUNTIME_PPC_JUMP_LABEL(.L_803C83F0, 0x803C83F0) //this is a jump label
/*803C83F0 003C51F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C83F4 003C51F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C83F8 003C51F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803C83FC 003C51FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C8400 003C5200*/ PPC::Runtime::ASM::blr();
}