//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"



void fn_80429774(PPC::Runtime::GCContext* context)
{
/*80429774 00426574*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80429778 00426578*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042977C 0042657C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429780 00426580*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80429784 00426584*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80429788 00426588*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*8042978C 0042658C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*80429790 00426590*/ PPC::Runtime::ASM::bne(.L_804297AC);
/*80429794 00426594*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504E10 @ Get_MemoryOffset_HighBit);
/*80429798 00426598*/ PPC::Runtime::ASM::lis(context->r5, lbl_80504E4C @ Get_MemoryOffset_HighBit);
/*8042979C 0042659C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504E10 @ Get_MemoryOffset_LowBit);
/*804297A0 004265A0*/ PPC::Runtime::ASM::li(context->r4, 0x19f);
/*804297A4 004265A4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80504E4C @ Get_MemoryOffset_LowBit);
/*804297A8 004265A8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804297AC, 0x804297AC) //this is a jump label
/*804297AC 004265AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*804297B0 004265B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804297B4 004265B4*/ PPC::Runtime::ASM::beq(.L_804297C4);
/*804297B8 004265B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804297BC 004265BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*804297C0 004265C0*/ PPC::Runtime::ASM::b(.L_804297D8);
RUNTIME_PPC_JUMP_LABEL(.L_804297C4, 0x804297C4) //this is a jump label
/*804297C4 004265C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*804297C8 004265C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804297CC 004265CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE32C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804297D0 004265D0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*804297D4 004265D4*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804297D8, 0x804297D8) //this is a jump label
/*804297D8 004265D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*804297DC 004265DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804297E0 004265E0*/ PPC::Runtime::ASM::beq(.L_804297F0);
/*804297E4 004265E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*804297E8 004265E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*804297EC 004265EC*/ PPC::Runtime::ASM::b(.L_80429804);
RUNTIME_PPC_JUMP_LABEL(.L_804297F0, 0x804297F0) //this is a jump label
/*804297F0 004265F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*804297F4 004265F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*804297F8 004265F8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804297FC 004265FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80429800 00426600*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80429804, 0x80429804) //this is a jump label
/*80429804 00426604*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*80429808 00426608*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8042980C 0042660C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80429810 00426610*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*80429814 00426614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80429818 00426618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8042981C 0042661C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80429820 00426620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429824 00426624*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80429828 00426628*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8042982C 0042662C*/ PPC::Runtime::ASM::blr();
}