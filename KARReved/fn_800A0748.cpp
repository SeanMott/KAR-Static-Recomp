//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800A0748(PPC::Runtime::GCContext* context)
{
/*800A0748 0009D548*/ PPC::Runtime::ASM::cmplwi(context->r4, 0xa);
/*800A074C 0009D54C*/ PPC::Runtime::ASM::bgt(.L_800A08A0);
/*800A0750 0009D550*/ PPC::Runtime::ASM::lis(context->r5, jumptable_8049E6E4 @ Get_MemoryOffset_HighBit);
/*800A0754 0009D554*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*800A0758 0009D558*/ PPC::Runtime::ASM::addi(context->r4, context->r5, jumptable_8049E6E4 @ Get_MemoryOffset_LowBit);
/*800A075C 0009D55C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*800A0760 0009D560*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800A0764 0009D564*/ PPC::Runtime::ASM::bctr();
/*800A0768 0009D568*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r3));
/*800A076C 0009D56C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A0770 0009D570*/ PPC::Runtime::ASM::beq(.L_800A0780);
/*800A0774 0009D574*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A0778 0009D578*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A077C 0009D57C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A0780, 0x800A0780) //this is a jump label
/*800A0780 0009D580*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0784 0009D584*/ PPC::Runtime::ASM::blr();
/*800A0788 0009D588*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r3));
/*800A078C 0009D58C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0790 0009D590*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800A0794 0009D594*/ PPC::Runtime::ASM::beq(.L_800A07A8);
/*800A0798 0009D598*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800A079C 0009D59C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A07A0 0009D5A0*/ PPC::Runtime::ASM::beq(.L_800A07A8);
/*800A07A4 0009D5A4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A07A8, 0x800A07A8) //this is a jump label
/*800A07A8 0009D5A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800A07AC 0009D5AC*/ PPC::Runtime::ASM::beq(.L_800A07BC);
/*800A07B0 0009D5B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800A07B4 0009D5B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A07B8 0009D5B8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A07BC, 0x800A07BC) //this is a jump label
/*800A07BC 0009D5BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A07C0 0009D5C0*/ PPC::Runtime::ASM::blr();
/*800A07C4 0009D5C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*800A07C8 0009D5C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A07CC 0009D5CC*/ PPC::Runtime::ASM::beq(.L_800A07D8);
/*800A07D0 0009D5D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A07D4 0009D5D4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A07D8, 0x800A07D8) //this is a jump label
/*800A07D8 0009D5D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A07DC 0009D5DC*/ PPC::Runtime::ASM::blr();
/*800A07E0 0009D5E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A07E4 0009D5E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A07E8 0009D5E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A07EC 0009D5EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A07F0 0009D5F0*/ PPC::Runtime::ASM::beq(.L_800A0800);
/*800A07F4 0009D5F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A07F8 0009D5F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A07FC 0009D5FC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A0800, 0x800A0800) //this is a jump label
/*800A0800 0009D600*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0804 0009D604*/ PPC::Runtime::ASM::blr();
/*800A0808 0009D608*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A080C 0009D60C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A0810 0009D610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800A0814 0009D614*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A0818 0009D618*/ PPC::Runtime::ASM::beq(.L_800A0828);
/*800A081C 0009D61C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A0820 0009D620*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A0824 0009D624*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A0828, 0x800A0828) //this is a jump label
/*800A0828 0009D628*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A082C 0009D62C*/ PPC::Runtime::ASM::blr();
/*800A0830 0009D630*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A0834 0009D634*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A0838 0009D638*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800A083C 0009D63C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A0840 0009D640*/ PPC::Runtime::ASM::beq(.L_800A0850);
/*800A0844 0009D644*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A0848 0009D648*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A084C 0009D64C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A0850, 0x800A0850) //this is a jump label
/*800A0850 0009D650*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0854 0009D654*/ PPC::Runtime::ASM::blr();
/*800A0858 0009D658*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A085C 0009D65C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A0860 0009D660*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800A0864 0009D664*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A0868 0009D668*/ PPC::Runtime::ASM::beq(.L_800A0874);
/*800A086C 0009D66C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A0870 0009D670*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A0874, 0x800A0874) //this is a jump label
/*800A0874 0009D674*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A0878 0009D678*/ PPC::Runtime::ASM::blr();
/*800A087C 0009D67C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A0880 0009D680*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A0884 0009D684*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800A0888 0009D688*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A088C 0009D68C*/ PPC::Runtime::ASM::beq(.L_800A0898);
/*800A0890 0009D690*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A0894 0009D694*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A0898, 0x800A0898) //this is a jump label
/*800A0898 0009D698*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A089C 0009D69C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800A08A0, 0x800A08A0) //this is a jump label
/*800A08A0 0009D6A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A08A4 0009D6A4*/ PPC::Runtime::ASM::blr();
}