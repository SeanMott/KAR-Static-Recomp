//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054414.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80062CA4.hpp"



void fn_801C9694(PPC::Runtime::GCContext* context)
{
/*801C9694 001C6494*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801C9698 001C6498*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C969C 001C649C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801C96A0 001C64A0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801C96A4 001C64A4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801C96A8 001C64A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801C96AC 001C64AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801C96B0 001C64B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C96B4 001C64B4*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*801C96B8 001C64B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r3));
/*801C96BC 001C64BC*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801C96C0 001C64C0*/ PPC::Runtime::ASM::lwzx(context->r30, context->r3, context->r0);
/*801C96C4 001C64C4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C96C8 001C64C8*/ PPC::Runtime::ASM::bne(.L_801C96DC);
/*801C96CC 001C64CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C96D0 001C64D0*/ PPC::Runtime::ASM::li(context->r4, 0x308);
/*801C96D4 001C64D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C96D8 001C64D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C96DC, 0x801C96DC) //this is a jump label
/*801C96DC 001C64DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801C96E0 001C64E0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*801C96E4 001C64E4*/ PPC::Runtime::ASM::beq(.L_801C98A4);
/*801C96E8 001C64E8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C96EC 001C64EC*/ PPC::Runtime::ASM::bne(.L_801C9700);
/*801C96F0 001C64F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C96F4 001C64F4*/ PPC::Runtime::ASM::li(context->r4, 0x2cc);
/*801C96F8 001C64F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C96FC 001C64FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C9700, 0x801C9700) //this is a jump label
/*801C9700 001C6500*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C9704 001C6504*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 14, 14);
/*801C9708 001C6508*/ PPC::Runtime::ASM::beq(.L_801C9720);
/*801C970C 001C650C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B0A08 @ Get_MemoryOffset_HighBit);
/*801C9710 001C6510*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C9714 001C6514*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B0A08 @ Get_MemoryOffset_LowBit);
/*801C9718 001C6518*/ PPC::Runtime::ASM::li(context->r4, 0x2cd);
/*801C971C 001C651C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C9720, 0x801C9720) //this is a jump label
/*801C9720 001C6520*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801C9724 001C6524*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C9728 001C6528*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801C972C 001C652C*/ PPC::Runtime::ASM::bne(.L_801C9778);
/*801C9730 001C6530*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C9734 001C6534*/ PPC::Runtime::ASM::beq(.L_801C9778);
/*801C9738 001C6538*/ PPC::Runtime::ASM::bne(.L_801C974C);
/*801C973C 001C653C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C9740 001C6540*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801C9744 001C6544*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C9748 001C6548*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C974C, 0x801C974C) //this is a jump label
/*801C974C 001C654C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C9750 001C6550*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C9754 001C6554*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801C9758 001C6558*/ PPC::Runtime::ASM::bne(.L_801C9768);
/*801C975C 001C655C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801C9760 001C6560*/ PPC::Runtime::ASM::beq(.L_801C9768);
/*801C9764 001C6564*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801C9768, 0x801C9768) //this is a jump label
/*801C9768 001C6568*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C976C 001C656C*/ PPC::Runtime::ASM::bne(.L_801C9778);
/*801C9770 001C6570*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801C9774 001C6574*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801C9778, 0x801C9778) //this is a jump label
/*801C9778 001C6578*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801C977C 001C657C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/* 801C9780 001C6580  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801C9784 001C6584*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801C9788 001C6588*/ PPC::Runtime::ASM::beq(.L_801C97D8);
/*801C978C 001C658C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/* 801C9790 001C6590  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801C9794 001C6594*/ PPC::Runtime::ASM::bne(.L_801C97C8);
/*801C9798 001C6598*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r31));
/*801C979C 001C659C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x418);
/*801C97A0 001C65A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r31));
/*801C97A4 001C65A4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x424);
/*801C97A8 001C65A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801C97AC 001C65AC*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x3e8);
/*801C97B0 001C65B0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*801C97B4 001C65B4*/ PPC::Runtime::ASM::bl(fn_80054414);
/*801C97B8 001C65B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801C97BC 001C65BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C97C0 001C65C0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801C97C4 001C65C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801C97C8, 0x801C97C8) //this is a jump label
/*801C97C8 001C65C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801C97CC 001C65CC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C97D0 001C65D0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801C97D4 001C65D4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801C97D8, 0x801C97D8) //this is a jump label
/*801C97D8 001C65D8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C97DC 001C65DC*/ PPC::Runtime::ASM::bne(.L_801C97F0);
/*801C97E0 001C65E0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C97E4 001C65E4*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801C97E8 001C65E8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C97EC 001C65EC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C97F0, 0x801C97F0) //this is a jump label
/*801C97F0 001C65F0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C97F4 001C65F4*/ PPC::Runtime::ASM::beq(.L_801C9838);
/*801C97F8 001C65F8*/ PPC::Runtime::ASM::bne(.L_801C980C);
/*801C97FC 001C65FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FC8 @ Get_MemoryOffset_SDA21);
/*801C9800 001C6600*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801C9804 001C6604*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FD0 @ Get_MemoryOffset_SDA21);
/*801C9808 001C6608*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C980C, 0x801C980C) //this is a jump label
/*801C980C 001C660C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C9810 001C6610*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C9814 001C6614*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801C9818 001C6618*/ PPC::Runtime::ASM::bne(.L_801C9828);
/*801C981C 001C661C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801C9820 001C6620*/ PPC::Runtime::ASM::beq(.L_801C9828);
/*801C9824 001C6624*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801C9828, 0x801C9828) //this is a jump label
/*801C9828 001C6628*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C982C 001C662C*/ PPC::Runtime::ASM::beq(.L_801C9838);
/*801C9830 001C6630*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801C9834 001C6634*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_801C9838, 0x801C9838) //this is a jump label
/*801C9838 001C6638*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*801C983C 001C663C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801C9840 001C6640*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x43c);
/*801C9844 001C6644*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801C9848 001C6648*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*801C984C 001C664C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C9850 001C6650*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*801C9854 001C6654*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801C9858 001C6658*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801C985C 001C665C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*801C9860 001C6660*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801C9864 001C6664*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x448);
/*801C9868 001C6668*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C986C 001C666C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*801C9870 001C6670*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C9874 001C6674*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*801C9878 001C6678*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C987C 001C667C*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*801C9880 001C6680*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*801C9884 001C6684*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*801C9888 001C6688*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x454);
/*801C988C 001C668C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801C9890 001C6690*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*801C9894 001C6694*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C9898 001C6698*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*801C989C 001C669C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801C98A0 001C66A0*/ PPC::Runtime::ASM::bl(fn_80062CA4);
RUNTIME_PPC_JUMP_LABEL(.L_801C98A4, 0x801C98A4) //this is a jump label
/*801C98A4 001C66A4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801C98A8 001C66A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801C98AC 001C66AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801C98B0 001C66B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801C98B4 001C66B4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801C98B8 001C66B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C98BC 001C66BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801C98C0 001C66C0*/ PPC::Runtime::ASM::blr();
}