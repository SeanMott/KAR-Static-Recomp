//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80219908(PPC::Runtime::GCContext* context)
{
/*80219908 00216708*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8021990C 0021670C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80219910 00216710*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r3));
/*80219914 00216714*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80219918 00216718*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8021991C 0021671C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r3));
/*80219920 00216720*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r3));
/*80219924 00216724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80219928 00216728*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8021992C 0021672C*/ PPC::Runtime::ASM::blt(.L_80219940);
/*80219930 00216730*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r3));
/*80219934 00216734*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r3));
/*80219938 00216738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb50, context->r3));
/*8021993C 0021673C*/ PPC::Runtime::ASM::b(.L_80219980);
RUNTIME_PPC_JUMP_LABEL(.L_80219940, 0x80219940) //this is a jump label
/*80219940 00216740*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*80219944 00216744*/ PPC::Runtime::ASM::xoris(context->r5, context->r5, 0x8000);
/*80219948 00216748*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021994C 0021674C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80219950 00216750*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E26C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80219954 00216754*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80219958 00216758*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r3));
/*8021995C 0021675C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80219960 00216760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80219964 00216764*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*80219968 00216768*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8021996C 0021676C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80219970 00216770*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*80219974 00216774*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80219978 00216778*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8021997C 0021677C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb50, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80219980, 0x80219980) //this is a jump label
/*80219980 00216780*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80219984 00216784*/ PPC::Runtime::ASM::blr();
}