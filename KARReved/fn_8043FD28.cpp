//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8043A15C.hpp"
#include "memset.hpp"
#include "fn_HSD_VIGetXFBLastDrawDone.hpp"
#include "fn_HSD_VISetEFBDrawDone.hpp"
#include "fn_803D586C.hpp"
#include "fn_ListContainerBase_Tamplate_P6cSAnim_33NewAdapter_Template_19ListEntry_Template_P6cSAnim_DeleteEntry_TakeParam_ListEntry_Template_P6cSAnimPointer.hpp"
#include "fn_ListContainerBase_Tamplate_P6cSAnim_33NewAdapter_Template_19ListEntry_Template_P6cSAnim_DeleteEntry_TakeParam_ListEntry_Template_P6cSAnimPointer.hpp"
#include "__OSSetExceptionHandler.hpp"
#include "fn_8043F820.hpp"
#include "fn_8043F820.hpp"
#include "fn_OSCreateThread.hpp"
#include "fn_OSResumeThread.hpp"



void fn_8043FD28(PPC::Runtime::GCContext* context)
{
/*8043FD28 0043CB28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x330, context->r1));
/*8043FD2C 0043CB2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043FD30 0043CB30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r1));
/*8043FD34 0043CB34*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r1));
/*8043FD38 0043CB38*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8043FD3C 0043CB3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043FD40 0043CB40*/ PPC::Runtime::ASM::bl(fn_8043A15C);
/*8043FD44 0043CB44*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FD48 0043CB48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8043FD4C 0043CB4C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FD50 0043CB50*/ PPC::Runtime::ASM::li(context->r5, 0xd8);
/*8043FD54 0043CB54*/ PPC::Runtime::ASM::bl(memset);
/*8043FD58 0043CB58*/ PPC::Runtime::ASM::bl(fn_HSD_VIGetXFBLastDrawDone);
/*8043FD5C 0043CB5C*/ PPC::Runtime::ASM::bl(fn_HSD_VISetEFBDrawDone);
/*8043FD60 0043CB60*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8043FD64 0043CB64*/ PPC::Runtime::ASM::beq(.L_8043FD88);
/*8043FD68 0043CB68*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0x60);
/*8043FD6C 0043CB6C*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*8043FD70 0043CB70*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FD74 0043CB74*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*8043FD78 0043CB78*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*8043FD7C 0043CB7C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FD80 0043CB80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r5));
/*8043FD84 0043CB84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8043FD88, 0x8043FD88) //this is a jump label
/*8043FD88 0043CB88*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*8043FD8C 0043CB8C*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FD90 0043CB90*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*8043FD94 0043CB94*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8043FD98 0043CB98*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r5));
/*8043FD9C 0043CB9C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FDA0 0043CBA0*/ PPC::Runtime::ASM::mtctr(context->r9);
/*8043FDA4 0043CBA4*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*8043FDA8 0043CBA8*/ PPC::Runtime::ASM::ble(.L_8043FDD0);
RUNTIME_PPC_JUMP_LABEL(.L_8043FDAC, 0x8043FDAC) //this is a jump label
/*8043FDAC 0043CBAC*/ PPC::Runtime::ASM::cmpw(context->r8, context->r3);
/*8043FDB0 0043CBB0*/ PPC::Runtime::ASM::beq(.L_8043FDC4);
/*8043FDB4 0043CBB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r5));
/*8043FDB8 0043CBB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FDBC 0043CBBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*8043FDC0 0043CBC0*/ PPC::Runtime::ASM::bne(.L_8043FDD0);
RUNTIME_PPC_JUMP_LABEL(.L_8043FDC4, 0x8043FDC4) //this is a jump label
/*8043FDC4 0043CBC4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x60);
/*8043FDC8 0043CBC8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8043FDCC 0043CBCC*/ PPC::Runtime::ASM::bdnz(.L_8043FDAC);
RUNTIME_PPC_JUMP_LABEL(.L_8043FDD0, 0x8043FDD0) //this is a jump label
/*8043FDD0 0043CBD0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8043FDD4 0043CBD4*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*8043FDD8 0043CBD8*/ PPC::Runtime::ASM::mulli(context->r6, context->r8, 0x60);
/*8043FDDC 0043CBDC*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FDE0 0043CBE0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*8043FDE4 0043CBE4*/ PPC::Runtime::ASM::subf(context->r0, context->r8, context->r9);
/*8043FDE8 0043CBE8*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r6);
/*8043FDEC 0043CBEC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FDF0 0043CBF0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8043FDF4 0043CBF4*/ PPC::Runtime::ASM::cmpw(context->r8, context->r9);
/*8043FDF8 0043CBF8*/ PPC::Runtime::ASM::bge(.L_8043FE20);
RUNTIME_PPC_JUMP_LABEL(.L_8043FDFC, 0x8043FDFC) //this is a jump label
/*8043FDFC 0043CBFC*/ PPC::Runtime::ASM::cmpw(context->r8, context->r3);
/*8043FE00 0043CC00*/ PPC::Runtime::ASM::beq(.L_8043FE14);
/*8043FE04 0043CC04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r5));
/*8043FE08 0043CC08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FE0C 0043CC0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8043FE10 0043CC10*/ PPC::Runtime::ASM::bne(.L_8043FE20);
RUNTIME_PPC_JUMP_LABEL(.L_8043FE14, 0x8043FE14) //this is a jump label
/*8043FE14 0043CC14*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x60);
/*8043FE18 0043CC18*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*8043FE1C 0043CC1C*/ PPC::Runtime::ASM::bdnz(.L_8043FDFC);
RUNTIME_PPC_JUMP_LABEL(.L_8043FE20, 0x8043FE20) //this is a jump label
/*8043FE20 0043CC20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*8043FE24 0043CC24*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FE28 0043CC28*/ PPC::Runtime::ASM::bne(.L_8043FE4C);
/*8043FE2C 0043CC2C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FE30 0043CC30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FE34 0043CC34*/ PPC::Runtime::ASM::addic.(context->r5, context->r3, 0x2c);
/*8043FE38 0043CC38*/ PPC::Runtime::ASM::beq(.L_8043FE4C);
/*8043FE3C 0043CC3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8043FE40 0043CC40*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043FE44 0043CC44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*8043FE48 0043CC48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8043FE4C, 0x8043FE4C) //this is a jump label
/*8043FE4C 0043CC4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*8043FE50 0043CC50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FE54 0043CC54*/ PPC::Runtime::ASM::bne(.L_8043FE60);
/*8043FE58 0043CC58*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*8043FE5C 0043CC5C*/ PPC::Runtime::ASM::b(.L_8043FF1C);
RUNTIME_PPC_JUMP_LABEL(.L_8043FE60, 0x8043FE60) //this is a jump label
/*8043FE60 0043CC60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8043FE64 0043CC64*/ PPC::Runtime::ASM::lis(context->r7, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FE68 0043CC68*/ PPC::Runtime::ASM::lis(context->r5, 0xba2f);
/*8043FE6C 0043CC6C*/ PPC::Runtime::ASM::lis(context->r4, 0x2492);
/*8043FE70 0043CC70*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8043FE74 0043CC74*/ PPC::Runtime::ASM::lis(context->r6, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_HighBit);
/*8043FE78 0043CC78*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8043FE7C 0043CC7C*/ PPC::Runtime::ASM::addi(context->r9, context->r7, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FE80 0043CC80*/ PPC::Runtime::ASM::srwi(context->r8, context->r0, 31);
/*8043FE84 0043CC84*/ PPC::Runtime::ASM::addi(context->r7, context->r6, STRUCT_BYTE4_COUNT_180589A80 @ Get_MemoryOffset_LowBit);
/*8043FE88 0043CC88*/ PPC::Runtime::ASM::addi(context->r0, context->r8, 0x1);
/*8043FE8C 0043CC8C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r9));
/*8043FE90 0043CC90*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8043FE94 0043CC94*/ PPC::Runtime::ASM::lis(context->r3, lbl_80505680 @ Get_MemoryOffset_HighBit);
/*8043FE98 0043CC98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r9));
/*8043FE9C 0043CC9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_80505680 @ Get_MemoryOffset_LowBit);
/*8043FEA0 0043CCA0*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x745d);
/*8043FEA4 0043CCA4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4925);
/*8043FEA8 0043CCA8*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r9));
/*8043FEAC 0043CCAC*/ PPC::Runtime::ASM::li(context->r10, 0x1);
/*8043FEB0 0043CCB0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8043FEB4 0043CCB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r9));
/*8043FEB8 0043CCB8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0xf);
/*8043FEBC 0043CCBC*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x28);
/*8043FEC0 0043CCC0*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8043FEC4 0043CCC4*/ PPC::Runtime::ASM::mulhwu(context->r5, context->r5, context->r3);
/*8043FEC8 0043CCC8*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r6, 1, 15, 26);
/*8043FECC 0043CCCC*/ PPC::Runtime::ASM::subi(context->r3, context->r7, 0x50);
/*8043FED0 0043CCD0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r9));
/*8043FED4 0043CCD4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r9));
/*8043FED8 0043CCD8*/ PPC::Runtime::ASM::mulhwu(context->r4, context->r4, context->r3);
/*8043FEDC 0043CCDC*/ PPC::Runtime::ASM::srwi(context->r5, context->r5, 3);
/*8043FEE0 0043CCE0*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*8043FEE4 0043CCE4*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8043FEE8 0043CCE8*/ PPC::Runtime::ASM::mullw(context->r6, context->r6, context->r7);
/*8043FEEC 0043CCEC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
/*8043FEF0 0043CCF0*/ PPC::Runtime::ASM::subf(context->r3, context->r4, context->r3);
/*8043FEF4 0043CCF4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*8043FEF8 0043CCF8*/ PPC::Runtime::ASM::srwi(context->r3, context->r3, 1);
/*8043FEFC 0043CCFC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r9));
/*8043FF00 0043CD00*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*8043FF04 0043CD04*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r9));
/*8043FF08 0043CD08*/ PPC::Runtime::ASM::srwi(context->r3, context->r3, 3);
/*8043FF0C 0043CD0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r9));
/*8043FF10 0043CD10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r9));
/*8043FF14 0043CD14*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r9));
/*8043FF18 0043CD18*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r9));
RUNTIME_PPC_JUMP_LABEL(.L_8043FF1C, 0x8043FF1C) //this is a jump label
/*8043FF1C 0043CD1C*/ PPC::Runtime::ASM::cmpwi(context->r10, 0x0);
/*8043FF20 0043CD20*/ PPC::Runtime::ASM::bne(.L_8043FF48);
/*8043FF24 0043CD24*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805E60E4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043FF28 0043CD28*/ PPC::Runtime::ASM::lis(context->r3, lbl_805088CC @ Get_MemoryOffset_HighBit);
/*8043FF2C 0043CD2C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E60E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043FF30 0043CD30*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_805088CC @ Get_MemoryOffset_LowBit);
/*8043FF34 0043CD34*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8043FF38 0043CD38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8043FF3C 0043CD3C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8043FF40 0043CD40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8043FF44 0043CD44*/ PPC::Runtime::ASM::bl(fn_803D586C);
RUNTIME_PPC_JUMP_LABEL(.L_8043FF48, 0x8043FF48) //this is a jump label
/*8043FF48 0043CD48*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FF4C 0043CD4C*/ PPC::Runtime::ASM::lis(context->r4, fn_ListContainerBase_Tamplate_P6cSAnim_33NewAdapter_Template_19ListEntry_Template_P6cSAnim_DeleteEntry_TakeParam_ListEntry_Template_P6cSAnimPointer @ Get_MemoryOffset_HighBit);
/*8043FF50 0043CD50*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FF54 0043CD54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r5));
/*8043FF58 0043CD58*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*8043FF5C 0043CD5C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_ListContainerBase_Tamplate_P6cSAnim_33NewAdapter_Template_19ListEntry_Template_P6cSAnim_DeleteEntry_TakeParam_ListEntry_Template_P6cSAnimPointer @ Get_MemoryOffset_LowBit);
/*8043FF60 0043CD60*/ PPC::Runtime::ASM::bl(__OSSetExceptionHandler);
/*8043FF64 0043CD64*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058D298 @ Get_MemoryOffset_HighBit);
/*8043FF68 0043CD68*/ PPC::Runtime::ASM::lis(context->r3, fn_8043F820 @ Get_MemoryOffset_HighBit);
/*8043FF6C 0043CD6C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_8058D298 @ Get_MemoryOffset_LowBit);
/*8043FF70 0043CD70*/ PPC::Runtime::ASM::li(context->r7, 0x1000);
/*8043FF74 0043CD74*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_8043F820 @ Get_MemoryOffset_LowBit);
/*8043FF78 0043CD78*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8043FF7C 0043CD7C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8043FF80 0043CD80*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0xffc);
/*8043FF84 0043CD84*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8043FF88 0043CD88*/ PPC::Runtime::ASM::li(context->r9, 0x1);
/*8043FF8C 0043CD8C*/ PPC::Runtime::ASM::bl(fn_OSCreateThread);
/*8043FF90 0043CD90*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*8043FF94 0043CD94*/ PPC::Runtime::ASM::bl(fn_OSResumeThread);
/*8043FF98 0043CD98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r1));
/*8043FF9C 0043CD9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r1));
/*8043FFA0 0043CDA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043FFA4 0043CDA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x330);
/*8043FFA8 0043CDA8*/ PPC::Runtime::ASM::blr();
}