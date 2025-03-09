//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSGetFontEncode.hpp"
#include "OSRegisterVersion.hpp"
#include "fn_DSPInit.hpp"
#include "OSInitAlarm.hpp"
#include "OSInitThreadQueue.hpp"
#include "OSCreateAlarm.hpp"
#include "fn___CARDSetDiskID.hpp"
#include "OSRegisterResetFunction.hpp"



void fn_CARDInit(PPC::Runtime::GCContext* context)
{
/*803E2C9C 003DFA9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E2CA0 003DFAA0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_HighBit);
/*803E2CA4 003DFAA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E2CA8 003DFAA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E2CAC 003DFAAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E2CB0 003DFAB0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E2CB4 003DFAB4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_18056E4E8 @ Get_MemoryOffset_LowBit);
/*803E2CB8 003DFAB8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E2CBC 003DFABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*803E2CC0 003DFAC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803E2CC4 003DFAC4*/ PPC::Runtime::ASM::beq(.L_803E2CD4);
/*803E2CC8 003DFAC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r30));
/*803E2CCC 003DFACC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803E2CD0 003DFAD0*/ PPC::Runtime::ASM::bne(.L_803E2D2C);
RUNTIME_PPC_JUMP_LABEL(.L_803E2CD4, 0x803E2CD4) //this is a jump label
/*803E2CD4 003DFAD4*/ PPC::Runtime::ASM::bl(fn_OSGetFontEncode);
/*803E2CD8 003DFAD8*/ PPC::Runtime::ASM::sth(context->r3, SkipAddress_47 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E2CDC 003DFADC*/ PPC::Runtime::ASM::lwz(context->r3, StructWithStructs_19 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E2CE0 003DFAE0*/ PPC::Runtime::ASM::bl(OSRegisterVersion);
/*803E2CE4 003DFAE4*/ PPC::Runtime::ASM::bl(fn_DSPInit);
/*803E2CE8 003DFAE8*/ PPC::Runtime::ASM::bl(OSInitAlarm);
/*803E2CEC 003DFAEC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803E2CF0 003DFAF0*/ PPC::Runtime::ASM::li(context->r31, -0x3);
RUNTIME_PPC_JUMP_LABEL(.L_803E2CF4, 0x803E2CF4) //this is a jump label
/*803E2CF4 003DFAF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803E2CF8 003DFAF8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c);
/*803E2CFC 003DFAFC*/ PPC::Runtime::ASM::bl(OSInitThreadQueue);
/*803E2D00 003DFB00*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe0);
/*803E2D04 003DFB04*/ PPC::Runtime::ASM::bl(OSCreateAlarm);
/*803E2D08 003DFB08*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*803E2D0C 003DFB0C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*803E2D10 003DFB10*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x110);
/*803E2D14 003DFB14*/ PPC::Runtime::ASM::blt(.L_803E2CF4);
/*803E2D18 003DFB18*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803E2D1C 003DFB1C*/ PPC::Runtime::ASM::bl(fn___CARDSetDiskID);
/*803E2D20 003DFB20*/ PPC::Runtime::ASM::lis(context->r3, lbl_804FCA30 @ Get_MemoryOffset_HighBit);
/*803E2D24 003DFB24*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804FCA30 @ Get_MemoryOffset_LowBit);
/*803E2D28 003DFB28*/ PPC::Runtime::ASM::bl(OSRegisterResetFunction);
RUNTIME_PPC_JUMP_LABEL(.L_803E2D2C, 0x803E2D2C) //this is a jump label
/*803E2D2C 003DFB2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E2D30 003DFB30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E2D34 003DFB34*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E2D38 003DFB38*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803E2D3C 003DFB3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E2D40 003DFB40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E2D44 003DFB44*/ PPC::Runtime::ASM::blr();
}