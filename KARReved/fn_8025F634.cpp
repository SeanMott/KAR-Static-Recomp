//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250954.hpp"
#include "fn_8025F698.hpp"
#include "fn_8025F718.hpp"



void fn_8025F634(PPC::Runtime::GCContext* context)
{
/*8025F634 0025C434*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F638 0025C438*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F63C 0025C43C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F640 0025C440*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F644 0025C444*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F648 0025C448*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025F64C 0025C44C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F650 0025C450*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F654 0025C454*/ PPC::Runtime::ASM::bl(fn_80250954);
/*8025F658 0025C458*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x359, context->r31));
/* 8025F65C 0025C45C  54 00 F7 7F */ extrwi. context->r0 , context->r0 , 3 , 27
/*8025F660 0025C460*/ PPC::Runtime::ASM::bne(.L_8025F670);
/*8025F664 0025C464*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F668 0025C468*/ PPC::Runtime::ASM::bl(fn_8025F698);
/*8025F66C 0025C46C*/ PPC::Runtime::ASM::b(.L_8025F678);
RUNTIME_PPC_JUMP_LABEL(.L_8025F670, 0x8025F670) //this is a jump label
/*8025F670 0025C470*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F674 0025C474*/ PPC::Runtime::ASM::bl(fn_8025F718);
RUNTIME_PPC_JUMP_LABEL(.L_8025F678, 0x8025F678) //this is a jump label
/*8025F678 0025C478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F67C 0025C47C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F680 0025C480*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F684 0025C484*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F688 0025C488*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F68C 0025C48C*/ PPC::Runtime::ASM::blr();
}