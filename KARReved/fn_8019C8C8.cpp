//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018DA68.hpp"



void fn_8019C8C8(PPC::Runtime::GCContext* context)
{
/*8019C8C8 001996C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8019C8CC 001996CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019C8D0 001996D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019C8D4 001996D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019C8D8 001996D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019C8DC 001996DC*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8019C8E0 001996E0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C8E4 001996E4*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8019C8E8 001996E8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019C8EC 001996EC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8019C8F0 001996F0*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019C8F4 001996F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r6));
/*8019C8F8 001996F8*/ PPC::Runtime::ASM::b(.L_8019C930);
RUNTIME_PPC_JUMP_LABEL(.L_8019C8FC, 0x8019C8FC) //this is a jump label
/*8019C8FC 001996FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8019C900 00199700*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8019C904 00199704*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r4));
/*8019C908 00199708*/ PPC::Runtime::ASM::bl(fn_8018DA68);
/*8019C90C 0019970C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019C910 00199710*/ PPC::Runtime::ASM::beq(.L_8019C92C);
/*8019C914 00199714*/ PPC::Runtime::ASM::mr(context->r12, context->r30);
/*8019C918 00199718*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8019C91C 0019971C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8019C920 00199720*/ PPC::Runtime::ASM::bctrl();
/*8019C924 00199724*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8019C928 00199728*/ PPC::Runtime::ASM::b(.L_8019C93C);
RUNTIME_PPC_JUMP_LABEL(.L_8019C92C, 0x8019C92C) //this is a jump label
/*8019C92C 0019972C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8019C930, 0x8019C930) //this is a jump label
/*8019C930 00199730*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8019C934 00199734*/ PPC::Runtime::ASM::bne(.L_8019C8FC);
/*8019C938 00199738*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8019C93C, 0x8019C93C) //this is a jump label
/*8019C93C 0019973C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019C940 00199740*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019C944 00199744*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019C948 00199748*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C94C 0019974C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019C950 00199750*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019C954 00199754*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8019C958 00199758*/ PPC::Runtime::ASM::blr();
}