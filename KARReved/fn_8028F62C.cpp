//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028F62C(PPC::Runtime::GCContext* context)
{
/*8028F62C 0028C42C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028F630 0028C430*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028F634 0028C434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028F638 0028C438*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028F63C 0028C43C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028F640 0028C440*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028F644 0028C444  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028F648 0028C448*/ PPC::Runtime::ASM::beq(.L_8028F67C);
/*8028F64C 0028C44C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028F650 0028C450*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028F654 0028C454*/ PPC::Runtime::ASM::beq(.L_8028F66C);
/*8028F658 0028C458*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8028F65C 0028C45C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8028F660 0028C460*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8028F664 0028C464*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028F668 0028C468*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028F66C, 0x8028F66C) //this is a jump label
/*8028F66C 0028C46C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028F670 0028C470*/ PPC::Runtime::ASM::ble(.L_8028F67C);
/*8028F674 0028C474*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028F678 0028C478*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028F67C, 0x8028F67C) //this is a jump label
/*8028F67C 0028C47C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028F680 0028C480*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028F684 0028C484*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028F688 0028C488*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028F68C 0028C48C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028F690 0028C490*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028F694 0028C494*/ PPC::Runtime::ASM::blr();
}