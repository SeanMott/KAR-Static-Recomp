//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80066DF8.hpp"
#include "fn_8011586C.hpp"
#include "fn_8011586C.hpp"
#include "fn_80066EE0.hpp"
#include "fn_80067008.hpp"
#include "fn_80067160.hpp"



void fn_80115AF4(PPC::Runtime::GCContext* context)
{
/*80115AF4 001128F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80115AF8 001128F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80115AFC 001128FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80115B00 00112900*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80115B04 00112904*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80115B08 00112908*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80115B0C 0011290C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80115B10 00112910*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80115B14 00112914*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80115B18 00112918*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80115B1C 0011291C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80115B20 00112920*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*80115B24 00112924*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80115B28 00112928*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80115B2C 0011292C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80115B30 00112930*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80115B34 00112934*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80115B38 00112938*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115B3C 0011293C*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*80115B40 00112940*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*80115B44 00112944*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80115B48 00112948*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115B4C 0011294C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115B50 00112950*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80115B54 00112954*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80115B58 00112958*/ PPC::Runtime::ASM::lis(context->r4, fn_8011586C @ Get_MemoryOffset_HighBit);
/*80115B5C 0011295C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115B60 00112960*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011586C @ Get_MemoryOffset_LowBit);
/*80115B64 00112964*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80115B68 00112968*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80115B6C 0011296C*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x16);
/*80115B70 00112970*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115B74 00112974*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80115B78 00112978*/ PPC::Runtime::ASM::bl(fn___shl2i);
/*80115B7C 0011297C*/ PPC::Runtime::ASM::lis(context->r5, 0x2);
/*80115B80 00112980*/ PPC::Runtime::ASM::slwi(context->r0, context->r27, 2);
/*80115B84 00112984*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r5);
/*80115B88 00112988*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115B8C 0011298C*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*80115B90 00112990*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80115B94 00112994*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80115B98 00112998*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80115B9C 0011299C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80115BA0 001129A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80115BA4 001129A4*/ PPC::Runtime::ASM::bne(.L_80115BB4);
/*80115BA8 001129A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80115BAC 001129AC*/ PPC::Runtime::ASM::bl(fn_80066EE0);
/*80115BB0 001129B0*/ PPC::Runtime::ASM::b(.L_80115BE0);
RUNTIME_PPC_JUMP_LABEL(.L_80115BB4, 0x80115BB4) //this is a jump label
/*80115BB4 001129B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80115BB8 001129B8*/ PPC::Runtime::ASM::bne(.L_80115BCC);
/*80115BBC 001129BC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80115BC0 001129C0*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80115BC4 001129C4*/ PPC::Runtime::ASM::bl(fn_80067008);
/*80115BC8 001129C8*/ PPC::Runtime::ASM::b(.L_80115BE0);
RUNTIME_PPC_JUMP_LABEL(.L_80115BCC, 0x80115BCC) //this is a jump label
/*80115BCC 001129CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80115BD0 001129D0*/ PPC::Runtime::ASM::bne(.L_80115BE0);
/*80115BD4 001129D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80115BD8 001129D8*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80115BDC 001129DC*/ PPC::Runtime::ASM::bl(fn_80067160);
RUNTIME_PPC_JUMP_LABEL(.L_80115BE0, 0x80115BE0) //this is a jump label
/*80115BE0 001129E0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80115BE4 001129E4*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80115BE8 001129E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80115BEC 001129EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115BF0 001129F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80115BF4 001129F4*/ PPC::Runtime::ASM::blr();
}