//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E1940(PPC::Runtime::GCContext* context)
{
/*800E1940 000DE740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800E1944 000DE744*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E1948 000DE748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E194C 000DE74C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E1950 000DE750*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800E1954 000DE754*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E1958 000DE758*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800E195C 000DE75C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E1960 000DE760*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800E1964 000DE764*/ PPC::Runtime::ASM::cmpw(context->r29, context->r30);
/*800E1968 000DE768*/ PPC::Runtime::ASM::blt(.L_800E1984);
/*800E196C 000DE76C*/ PPC::Runtime::ASM::lis(context->r3, String_Debug_ "grrangespline." Get_MemoryOffset_HighBit);
/*800E1970 000DE770*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_945 @ Get_MemoryOffset_HighBit);
/*800E1974 000DE774*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_Debug_ "grrangespline." Get_MemoryOffset_LowBit);
/*800E1978 000DE778*/ PPC::Runtime::ASM::li(context->r4, 0x43);
/*800E197C 000DE77C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_945 @ Get_MemoryOffset_LowBit);
/*800E1980 000DE780*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E1984, 0x800E1984) //this is a jump label
/*800E1984 000DE784*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*800E1988 000DE788*/ PPC::Runtime::ASM::beq(.L_800E19E0);
/* 800E198C 000DE78C  34 1E FF FF */ subic. context->r0 , context->r30 , 0x1
/*800E1990 000DE790*/ PPC::Runtime::ASM::bne(.L_800E199C);
/*800E1994 000DE794*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800E1998 000DE798*/ PPC::Runtime::ASM::b(.L_800E19D0);
RUNTIME_PPC_JUMP_LABEL(.L_800E199C, 0x800E199C) //this is a jump label
/*800E199C 000DE79C*/ PPC::Runtime::ASM::subi(context->r3, context->r30, 0x1);
/*800E19A0 000DE7A0*/ PPC::Runtime::ASM::srwi(context->r4, context->r3, 31);
/*800E19A4 000DE7A4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 31);
/*800E19A8 000DE7A8*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r4);
/*800E19AC 000DE7AC*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*800E19B0 000DE7B0*/ PPC::Runtime::ASM::subf.(context->r0, context->r4, context->r0);
/*800E19B4 000DE7B4*/ PPC::Runtime::ASM::srawi(context->r3, context->r3, 1);
/*800E19B8 000DE7B8*/ PPC::Runtime::ASM::beq(.L_800E19CC);
/*800E19BC 000DE7BC*/ PPC::Runtime::ASM::mullw(context->r0, context->r30, context->r3);
/*800E19C0 000DE7C0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800E19C4 000DE7C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800E19C8 000DE7C8*/ PPC::Runtime::ASM::b(.L_800E19D0);
RUNTIME_PPC_JUMP_LABEL(.L_800E19CC, 0x800E19CC) //this is a jump label
/*800E19CC 000DE7CC*/ PPC::Runtime::ASM::mullw(context->r3, context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_800E19D0, 0x800E19D0) //this is a jump label
/*800E19D0 000DE7D0*/ PPC::Runtime::ASM::add(context->r0, context->r29, context->r3);
/*800E19D4 000DE7D4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*800E19D8 000DE7D8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*800E19DC 000DE7DC*/ PPC::Runtime::ASM::b(.L_800E19E8);
RUNTIME_PPC_JUMP_LABEL(.L_800E19E0, 0x800E19E0) //this is a jump label
/*800E19E0 000DE7E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 1);
/*800E19E4 000DE7E4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800E19E8, 0x800E19E8) //this is a jump label
/*800E19E8 000DE7E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E19EC 000DE7EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800E19F0 000DE7F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800E19F4 000DE7F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800E19F8 000DE7F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E19FC 000DE7FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800E1A00 000DE800*/ PPC::Runtime::ASM::blr();
}