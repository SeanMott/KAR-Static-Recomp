//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hsdNew.hpp"
#include "fn___assert.hpp"



void fn_HSD_PObjAlloc(PPC::Runtime::GCContext* context)
{
/*8040590C 0040270C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80405910 00402710*/ PPC::Runtime::ASM::mflr(context->r0);
/*80405914 00402714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80405918 00402718*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8040591C 0040271C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE230 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80405920 00402720*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80405924 00402724*/ PPC::Runtime::ASM::beq(.L_8040592C);
/*80405928 00402728*/ PPC::Runtime::ASM::b(.L_80405934);
RUNTIME_PPC_JUMP_LABEL(.L_8040592C, 0x8040592C) //this is a jump label
/*8040592C 0040272C*/ PPC::Runtime::ASM::lis(context->r3, lbl_80503488 @ Get_MemoryOffset_HighBit);
/*80405930 00402730*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80503488 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80405934, 0x80405934) //this is a jump label
/*80405934 00402734*/ PPC::Runtime::ASM::bl(fn_hsdNew);
/* 80405938 00402738  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8040593C 0040273C*/ PPC::Runtime::ASM::bne(.L_80405950);
/*80405940 00402740*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_535 @ Get_MemoryOffset_SDA21);
/*80405944 00402744*/ PPC::Runtime::ASM::li(context->r4, 0x2ac);
/*80405948 00402748*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_534 @ Get_MemoryOffset_SDA21);
/*8040594C 0040274C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80405950, 0x80405950) //this is a jump label
/*80405950 00402750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80405954 00402754*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80405958 00402758*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8040595C 0040275C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80405960 00402760*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80405964 00402764*/ PPC::Runtime::ASM::blr();
}