//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D3900(PPC::Runtime::GCContext* context)
{
/*802D3900 002D0700*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D3904 002D0704*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D3908 002D0708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D390C 002D070C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D3910 002D0710*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802D3914 002D0714*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3918 002D0718*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D391C 002D071C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3920 002D0720*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*802D3924 002D0724*/ PPC::Runtime::ASM::beq(.L_802D3948);
/*802D3928 002D0728*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D392C 002D072C*/ PPC::Runtime::ASM::beq(.L_802D3944);
/*802D3930 002D0730*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D3934 002D0734*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D3938 002D0738*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D393C 002D073C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D3940 002D0740*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802D3944, 0x802D3944) //this is a jump label
/*802D3944 002D0744*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802D3948, 0x802D3948) //this is a jump label
/*802D3948 002D0748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D394C 002D074C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802D3950 002D0750*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D3954 002D0754*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D3958 002D0758*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D395C 002D075C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D3960 002D0760*/ PPC::Runtime::ASM::blr();
}