//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800BC370(PPC::Runtime::GCContext* context)
{
/*800BC370 000B9170*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800BC374 000B9174*/ PPC::Runtime::ASM::blt(.L_800BC380);
/*800BC378 000B9178*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x20);
/*800BC37C 000B917C*/ PPC::Runtime::ASM::blt(.L_800BC388);
RUNTIME_PPC_JUMP_LABEL(.L_800BC380, 0x800BC380) //this is a jump label
/*800BC380 000B9180*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800BC384 000B9184*/ PPC::Runtime::ASM::b(.L_800BC39C);
RUNTIME_PPC_JUMP_LABEL(.L_800BC388, 0x800BC388) //this is a jump label
/*800BC388 000B9188*/ PPC::Runtime::ASM::lis(context->r5, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800BC38C 000B918C*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*800BC390 000B9190*/ PPC::Runtime::ASM::addi(context->r3, context->r5, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800BC394 000B9194*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800BC398 000B9198*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800BC39C, 0x800BC39C) //this is a jump label
/*800BC39C 000B919C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800BC3A0 000B91A0*/ PPC::Runtime::ASM::beq(.L_800BC3AC);
/*800BC3A4 000B91A4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800BC3A8 000B91A8*/ PPC::Runtime::ASM::b(.L_800BC3B0);
RUNTIME_PPC_JUMP_LABEL(.L_800BC3AC, 0x800BC3AC) //this is a jump label
/*800BC3AC 000B91AC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800BC3B0, 0x800BC3B0) //this is a jump label
/*800BC3B0 000B91B0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800BC3B4 000B91B4*/ PPC::Runtime::ASM::beqlr();
/*800BC3B8 000B91B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800BC3BC 000B91BC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800BC3C0 000B91C0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*800BC3C4 000B91C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800BC3C8 000B91C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800BC3CC 000B91CC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*800BC3D0 000B91D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800BC3D4 000B91D4*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6a, context->r5));
/*800BC3D8 000B91D8*/ PPC::Runtime::ASM::blr();
}