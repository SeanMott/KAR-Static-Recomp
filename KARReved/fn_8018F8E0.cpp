//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191798.hpp"



void fn_8018F8E0(PPC::Runtime::GCContext* context)
{
/*8018F8E0 0018C6E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8018F8E4 0018C6E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018F8E8 0018C6E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018F8EC 0018C6EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018F8F0 0018C6F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8018F8F4 0018C6F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7d4, context->r31));
/*8018F8F8 0018C6F8*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8018F8FC 0018C6FC*/ PPC::Runtime::ASM::beq(.L_8018F90C);
/*8018F900 0018C700*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8018F904 0018C704*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8018F908 0018C708*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8018F90C, 0x8018F90C) //this is a jump label
/*8018F90C 0018C70C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8018F910 0018C710*/ PPC::Runtime::ASM::bl(fn_80191798);
/*8018F914 0018C714*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8018F918 0018C718*/ PPC::Runtime::ASM::bne(.L_8018F948);
/*8018F91C 0018C71C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8018F920 0018C720*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*8018F924 0018C724*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*8018F928 0018C728*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8018F92C 0018C72C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8018F930 0018C730*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8018F934 0018C734*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8018F938 0018C738*/ PPC::Runtime::ASM::beq(.L_8018F948);
/*8018F93C 0018C73C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8018F940 0018C740*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8018F944 0018C744*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8018F948, 0x8018F948) //this is a jump label
/*8018F948 0018C748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018F94C 0018C74C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018F950 0018C750*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018F954 0018C754*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8018F958 0018C758*/ PPC::Runtime::ASM::blr();
}