//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Encode.hpp"
#include "fn_MD5Update.hpp"
#include "fn_MD5Update.hpp"
#include "fn_Encode.hpp"
#include "memset.hpp"



void fn_MD5Final(PPC::Runtime::GCContext* context)
{
/*80469758 00466558*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046975C 0046655C*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*80469760 00466560*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80469764 00466564*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80469768 00466568*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8046976C 0046656C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, 0x0);
/*80469770 00466570*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10);
/*80469774 00466574*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80469778 00466578*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8046977C 0046657C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*80469780 00466580*/ PPC::Runtime::ASM::bl(fn_Encode);
/*80469784 00466584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80469788 00466588*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 6, 23);
/*8046978C 0046658C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x38);
/*80469790 00466590*/ PPC::Runtime::ASM::bge(.L_8046979C);
/*80469794 00466594*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x38);
/*80469798 00466598*/ PPC::Runtime::ASM::b(.L_804697A0);
RUNTIME_PPC_JUMP_LABEL(.L_8046979C, 0x8046979C) //this is a jump label
/*8046979C 0046659C*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x78);
RUNTIME_PPC_JUMP_LABEL(.L_804697A0, 0x804697A0) //this is a jump label
/*804697A0 004665A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80534048 @ Get_MemoryOffset_HighBit);
/*804697A4 004665A4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80534048 @ Get_MemoryOffset_LowBit);
/*804697A8 004665A8*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*804697AC 004665AC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*804697B0 004665B0*/ PPC::Runtime::ASM::bl(fn_MD5Update);
/*804697B4 004665B4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*804697B8 004665B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*804697BC 004665BC*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*804697C0 004665C0*/ PPC::Runtime::ASM::bl(fn_MD5Update);
/*804697C4 004665C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*804697C8 004665C8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*804697CC 004665CC*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*804697D0 004665D0*/ PPC::Runtime::ASM::bl(fn_Encode);
/*804697D4 004665D4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*804697D8 004665D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*804697DC 004665DC*/ PPC::Runtime::ASM::li(context->r5, 0x58);
/*804697E0 004665E0*/ PPC::Runtime::ASM::bl(memset);
/*804697E4 004665E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804697E8 004665E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804697EC 004665EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804697F0 004665F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804697F4 004665F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804697F8 004665F8*/ PPC::Runtime::ASM::blr();
}