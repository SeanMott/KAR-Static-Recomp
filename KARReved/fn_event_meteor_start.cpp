//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE73C.hpp"
#include "fn_801106F4.hpp"
#include "fn_80254174.hpp"
#include "fn_800ED784.hpp"



void fn_event_meteor_start(PPC::Runtime::GCContext* context)
{
/*80110B74 0010D974*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80110B78 0010D978*/ PPC::Runtime::ASM::mflr(context->r0);
/*80110B7C 0010D97C*/ PPC::Runtime::ASM::lis(context->r4, lbl_80557838 @ Get_MemoryOffset_HighBit);
/*80110B80 0010D980*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80110B84 0010D984*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80110B88 0010D988*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80110B8C 0010D98C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80110B90 0010D990*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_80557838 @ Get_MemoryOffset_LowBit);
/*80110B94 0010D994*/ PPC::Runtime::ASM::li(context->r4, 0x218);
/*80110B98 0010D998*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80110B9C 0010D99C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80557838 @ Get_MemoryOffset_HighBit);
/*80110BA0 0010D9A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80557838 @ Get_MemoryOffset_LowBit);
/*80110BA4 0010D9A4*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*80110BA8 0010D9A8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80110BAC 0010D9AC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110BB0 0010D9B0*/ PPC::Runtime::ASM::beq(.L_80110BE8);
/*80110BB4 0010D9B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80110BB8 0010D9B8*/ PPC::Runtime::ASM::bl(fn_800EE73C);
/*80110BBC 0010D9BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80110BC0 0010D9C0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110BC4 0010D9C4*/ PPC::Runtime::ASM::beq(.L_80110BE8);
/*80110BC8 0010D9C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80110BCC 0010D9CC*/ PPC::Runtime::ASM::bl(fn_801106F4);
/*80110BD0 0010D9D0*/ PPC::Runtime::ASM::bl(fn_80254174);
/*80110BD4 0010D9D4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*80110BD8 0010D9D8*/ PPC::Runtime::ASM::bl(fn_800ED784);
/*80110BDC 0010D9DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80110BE0 0010D9E0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD738 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110BE4 0010D9E4*/ PPC::Runtime::ASM::b(.L_80110BF8);
RUNTIME_PPC_JUMP_LABEL(.L_80110BE8, 0x80110BE8) //this is a jump label
/*80110BE8 0010D9E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80110BEC 0010D9EC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110BF0 0010D9F0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD734 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80110BF4 0010D9F4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD738 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80110BF8, 0x80110BF8) //this is a jump label
/*80110BF8 0010D9F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80110BFC 0010D9FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80110C00 0010DA00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80110C04 0010DA04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80110C08 0010DA08*/ PPC::Runtime::ASM::blr();
}