//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D2D24(PPC::Runtime::GCContext* context)
{
/*800D2D24 000CFB24*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800D2D28 000CFB28*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D2D2C 000CFB2C*/ PPC::Runtime::ASM::ble(.L_800D2D44);
/*800D2D30 000CFB30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r4));
/*800D2D34 000CFB34*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800D2D38 000CFB38*/ PPC::Runtime::ASM::bge(.L_800D2D44);
/*800D2D3C 000CFB3C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D2D40 000CFB40*/ PPC::Runtime::ASM::b(.L_800D2D48);
RUNTIME_PPC_JUMP_LABEL(.L_800D2D44, 0x800D2D44) //this is a jump label
/*800D2D44 000CFB44*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D2D48, 0x800D2D48) //this is a jump label
/*800D2D48 000CFB48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D2D4C 000CFB4C*/ PPC::Runtime::ASM::bne(.L_800D2D88);
/*800D2D50 000CFB50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r4));
/*800D2D54 000CFB54*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 6);
/*800D2D58 000CFB58*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800D2D5C 000CFB5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*800D2D60 000CFB60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*800D2D64 000CFB64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800D2D68 000CFB68*/ PPC::Runtime::ASM::bge(.L_800D2D80);
/*800D2D6C 000CFB6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800D2D70 000CFB70*/ PPC::Runtime::ASM::bge(.L_800D2D78);
/*800D2D74 000CFB74*/ PPC::Runtime::ASM::b(.L_800D2D80);
RUNTIME_PPC_JUMP_LABEL(.L_800D2D78, 0x800D2D78) //this is a jump label
/*800D2D78 000CFB78*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2D7C 000CFB7C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2D80, 0x800D2D80) //this is a jump label
/*800D2D80 000CFB80*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2D84 000CFB84*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2D88, 0x800D2D88) //this is a jump label
/*800D2D88 000CFB88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2D8C 000CFB8C*/ PPC::Runtime::ASM::blr();
}