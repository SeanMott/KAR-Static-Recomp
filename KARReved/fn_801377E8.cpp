//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131928.hpp"
#include "fn_8016ED5C.hpp"
#include "fn_8016EFB4.hpp"
#include "fn_8016F938.hpp"
#include "fn_8016FBAC.hpp"
#include "fn_8016FF5C.hpp"
#include "fn_8017033C.hpp"
#include "fn_80170698.hpp"
#include "fn_8013B6F0.hpp"
#include "fn_80161C08.hpp"
#include "fn_800724EC.hpp"
#include "fn_80236284.hpp"



void fn_801377E8(PPC::Runtime::GCContext* context)
{
/*801377E8 001345E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801377EC 001345EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801377F0 001345F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801377F4 001345F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801377F8 001345F8*/ PPC::Runtime::ASM::bl(fn_80131928);
/*801377FC 001345FC*/ PPC::Runtime::ASM::bl(fn_8016ED5C);
/*80137800 00134600*/ PPC::Runtime::ASM::bl(fn_8016EFB4);
/*80137804 00134604*/ PPC::Runtime::ASM::bl(fn_8016F938);
/*80137808 00134608*/ PPC::Runtime::ASM::bl(fn_8016FBAC);
/*8013780C 0013460C*/ PPC::Runtime::ASM::bl(fn_8016FF5C);
/*80137810 00134610*/ PPC::Runtime::ASM::bl(fn_8017033C);
/*80137814 00134614*/ PPC::Runtime::ASM::bl(fn_80170698);
/*80137818 00134618*/ PPC::Runtime::ASM::bl(fn_8013B6F0);
/*8013781C 0013461C*/ PPC::Runtime::ASM::bl(fn_80161C08);
/*80137820 00134620*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80137824 00134624*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*80137828 00134628*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8013782C 0013462C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80137830 00134630*/ PPC::Runtime::ASM::beq(.L_80137840);
/*80137834 00134634*/ PPC::Runtime::ASM::bl(fn_800724EC);
/*80137838 00134638*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013783C 0013463C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80137840, 0x80137840) //this is a jump label
/*80137840 00134640*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*80137844 00134644*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80137848 00134648*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*8013784C 0013464C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80137850 00134650*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80137854 00134654*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*80137858 00134658*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*8013785C 0013465C*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*80137860 00134660*/ PPC::Runtime::ASM::beq(.L_80137874);
/*80137864 00134664*/ PPC::Runtime::ASM::bl(fn_80236284);
/*80137868 00134668*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8013786C 0013466C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80137870 00134670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80137874, 0x80137874) //this is a jump label
/*80137874 00134674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137878 00134678*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013787C 0013467C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137880 00134680*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137884 00134684*/ PPC::Runtime::ASM::blr();
}