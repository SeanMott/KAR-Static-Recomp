//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSRegisterResetFunction.hpp"
#include "fn_IFInit.hpp"
#include "fn_SOGetHostID.hpp"
#include "fn_DHCPGetStatus.hpp"
#include "fn_IFMute.hpp"



void fn_SOInit(PPC::Runtime::GCContext* context)
{
/*8047B020 00477E20*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047B024 00477E24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047B028 00477E28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*8047B02C 00477E2C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE6BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B030 00477E30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B034 00477E34*/ PPC::Runtime::ASM::bne(.L_8047B04C);
/*8047B038 00477E38*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8047B03C 00477E3C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80534238 @ Get_MemoryOffset_HighBit);
/*8047B040 00477E40*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE6BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B044 00477E44*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80534238 @ Get_MemoryOffset_LowBit);
/*8047B048 00477E48*/ PPC::Runtime::ASM::bl(OSRegisterResetFunction);
RUNTIME_PPC_JUMP_LABEL(.L_8047B04C, 0x8047B04C) //this is a jump label
/*8047B04C 00477E4C*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8047B050 00477E50*/ PPC::Runtime::ASM::bl(fn_IFInit);
/*8047B054 00477E54*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B058 00477E58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B05C 00477E5C*/ PPC::Runtime::ASM::bne(.L_8047B090);
/*8047B060 00477E60*/ PPC::Runtime::ASM::bl(fn_SOGetHostID);
/*8047B064 00477E64*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8047B068 00477E68*/ PPC::Runtime::ASM::bne(.L_8047B07C);
/*8047B06C 00477E6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047B070 00477E70*/ PPC::Runtime::ASM::bl(fn_DHCPGetStatus);
/*8047B074 00477E74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047B078 00477E78*/ PPC::Runtime::ASM::beq(.L_8047B088);
RUNTIME_PPC_JUMP_LABEL(.L_8047B07C, 0x8047B07C) //this is a jump label
/*8047B07C 00477E7C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8047B080 00477E80*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE6B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B084 00477E84*/ PPC::Runtime::ASM::b(.L_8047B090);
RUNTIME_PPC_JUMP_LABEL(.L_8047B088, 0x8047B088) //this is a jump label
/*8047B088 00477E88*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8047B08C 00477E8C*/ PPC::Runtime::ASM::bl(fn_IFMute);
RUNTIME_PPC_JUMP_LABEL(.L_8047B090, 0x8047B090) //this is a jump label
/*8047B090 00477E90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8047B094 00477E94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*8047B098 00477E98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047B09C 00477E9C*/ PPC::Runtime::ASM::blr();
}