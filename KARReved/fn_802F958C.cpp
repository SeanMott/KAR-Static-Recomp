//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF844.hpp"
#include "fn_802D48BC.hpp"
#include "fn_802F0CC0.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80377C10.hpp"
#include "fn_802D4AB0.hpp"
#include "fn_802D4B3C.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379398.hpp"
#include "fn_802EFFB8.hpp"
#include "fn_80289768.hpp"
#include "fn_802F0148.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379784.hpp"
#include "fn_80379784.hpp"



void fn_802F958C(PPC::Runtime::GCContext* context)
{
/*802F958C 002F638C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*802F9590 002F6390*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F9594 002F6394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802F9598 002F6398*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802F959C 002F639C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802F95A0 002F63A0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802F95A4 002F63A4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802F95A8 002F63A8*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802F95AC 002F63AC*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802F95B0 002F63B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802F95B4 002F63B4*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*802F95B8 002F63B8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*802F95BC 002F63BC*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802F95C0 002F63C0*/ PPC::Runtime::ASM::mr(context->r0, context->r27);
/*802F95C4 002F63C4*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*802F95C8 002F63C8*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*802F95CC 002F63CC*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*802F95D0 002F63D0*/ PPC::Runtime::ASM::bl(fn_802DF844);
/*802F95D4 002F63D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802F95D8 002F63D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802F95DC 002F63DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*802F95E0 002F63E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F95E4 002F63E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F95E8 002F63E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F95EC 002F63EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*802F95F0 002F63F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F95F4 002F63F4*/ PPC::Runtime::ASM::bctrl();
/*802F95F8 002F63F8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802F95FC 002F63FC*/ PPC::Runtime::ASM::addi(context->r25, context->r28, 0x8);
/*802F9600 002F6400*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802F9604 002F6404*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*802F9608 002F6408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802F960C 002F640C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802F9610 002F6410*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F9614 002F6414*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802F9618 002F6418*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*802F961C 002F641C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F9620 002F6420*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802F9624 002F6424*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F9628 002F6428*/ PPC::Runtime::ASM::bctrl();
/*802F962C 002F642C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802F9630 002F6430*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802F9634 002F6434*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802F9638 002F6438*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802F963C 002F643C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F9640 002F6440*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802F9644 002F6444*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9648 002F6448*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F964C 002F644C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*802F9650 002F6450*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r25));
/*802F9654 002F6454*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r25));
/*802F9658 002F6458*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F965C 002F645C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F9660 002F6460*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802F9664 002F6464*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F9668 002F6468*/ PPC::Runtime::ASM::bctrl();
/*802F966C 002F646C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9670 002F6470*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9674 002F6474*/ PPC::Runtime::ASM::bl(fn_802D48BC);
/*802F9678 002F6478*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F967C 002F647C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xe0);
/*802F9680 002F6480*/ PPC::Runtime::ASM::bl(fn_802F0CC0);
/*802F9684 002F6484*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9688 002F6488*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r3));
/*802F968C 002F648C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802F9690 002F6490*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F9694 002F6494*/ PPC::Runtime::ASM::bctrl();
/*802F9698 002F6498*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F969C 002F649C*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x424, context->r3));
/*802F96A0 002F64A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802F96A4 002F64A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F96A8 002F64A8*/ PPC::Runtime::ASM::bctrl();
/*802F96AC 002F64AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F96B0 002F64B0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802F96B4 002F64B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802F96B8 002F64B8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*802F96BC 002F64BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf0, context->r5));
/*802F96C0 002F64C0*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xbf8);
/*802F96C4 002F64C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf7, context->r5));
/*802F96C8 002F64C8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf6, context->r5));
/*802F96CC 002F64CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf5, context->r5));
/*802F96D0 002F64D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf4, context->r5));
/*802F96D4 002F64D4*/ PPC::Runtime::ASM::bl(fn_803839BC);
/*802F96D8 002F64D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F96DC 002F64DC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F96E0 002F64E0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F96E4 002F64E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F96E8 002F64E8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F96EC 002F64EC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802F96F0 002F64F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F96F4 002F64F4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F96F8 002F64F8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*802F96FC 002F64FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9700 002F6500*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*802F9704 002F6504*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9708 002F6508*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F970C 002F650C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802F9710 002F6510*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802F9714 002F6514*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F9718 002F6518*/ PPC::Runtime::ASM::li(context->r5, lbl_805D97F8 @ Get_MemoryOffset_SDA21);
/*802F971C 002F651C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D97F0 @ Get_MemoryOffset_SDA21);
/*802F9720 002F6520*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802F9724 002F6524*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802F9728 002F6528*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802F972C 002F652C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9730 002F6530*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802F9734 002F6534*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802F9738 002F6538*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802F973C 002F653C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9740 002F6540*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802F9744 002F6544*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9748 002F6548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*802F974C 002F654C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9750 002F6550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*802F9754 002F6554*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9758 002F6558*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802F975C 002F655C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804D9018 @ Get_MemoryOffset_HighBit);
/*802F9760 002F6560*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802F9764 002F6564*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802F9768 002F6568*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804D9018 @ Get_MemoryOffset_LowBit);
/*802F976C 002F656C*/ PPC::Runtime::ASM::bl(fn_80377C10);
/*802F9770 002F6570*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F9774 002F6574*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F9778 002F6578*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802F977C 002F657C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F9780 002F6580*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*802F9784 002F6584*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F9788 002F6588*/ PPC::Runtime::ASM::bctrl();
/*802F978C 002F658C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F9790 002F6590*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802F9794 002F6594*/ PPC::Runtime::ASM::bl(fn_802D4AB0);
/*802F9798 002F6598*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*802F979C 002F659C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802F97A0 002F65A0*/ PPC::Runtime::ASM::bl(fn_802D4B3C);
/*802F97A4 002F65A4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802F97A8 002F65A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D964C @ Get_MemoryOffset_HighBit);
/*802F97AC 002F65AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F97B0 002F65B0*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_804D964C @ Get_MemoryOffset_LowBit);
/*802F97B4 002F65B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*802F97B8 002F65B8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F97BC 002F65BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802F97C0 002F65C0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*802F97C4 002F65C4*/ PPC::Runtime::ASM::addi(context->r25, context->r27, 0x3c);
/*802F97C8 002F65C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802F97CC 002F65CC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F97D0 002F65D0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F97D4 002F65D4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802F97D8 002F65D8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802F97DC 002F65DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r27));
/*802F97E0 002F65E0*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r27));
/*802F97E4 002F65E4*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a, context->r27));
/*802F97E8 002F65E8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r27));
/*802F97EC 002F65EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r27));
/*802F97F0 002F65F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*802F97F4 002F65F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F97F8 002F65F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802F97FC 002F65FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F9800 002F6600*/ PPC::Runtime::ASM::bctrl();
/*802F9804 002F6604*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*802F9808 002F6608*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F980C 002F660C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*802F9810 002F6610*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802F9814 002F6614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*802F9818 002F6618*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F981C 002F661C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802F9820 002F6620*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802F9824 002F6624*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802F9828 002F6628*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*802F982C 002F662C*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x88);
/*802F9830 002F6630*/ PPC::Runtime::ASM::bl(fn_80379398);
/*802F9834 002F6634*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F9838 002F6638*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D9058 @ Get_MemoryOffset_HighBit);
/*802F983C 002F663C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D9058 @ Get_MemoryOffset_LowBit);
/*802F9840 002F6640*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F9844 002F6644*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r6));
/*802F9848 002F6648*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802F984C 002F664C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F9850 002F6650*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F9854 002F6654*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F9858 002F6658*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F985C 002F665C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802F9860 002F6660*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9864 002F6664*/ PPC::Runtime::ASM::li(context->r4, 0x20);
/*802F9868 002F6668*/ PPC::Runtime::ASM::bl(fn_80289768);
/*802F986C 002F666C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F9870 002F6670*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F9874 002F6674*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F9878 002F6678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802F987C 002F667C*/ PPC::Runtime::ASM::bl(fn_802F0148);
/*802F9880 002F6680*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802F9884 002F6684*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F9888 002F6688*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r3));
/*802F988C 002F668C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*802F9890 002F6690*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802F9894 002F6694*/ PPC::Runtime::ASM::fmuls(context->f30, context->f0, context->f1);
/*802F9898 002F6698*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F989C 002F669C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802F98A0 002F66A0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F98A4 002F66A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F98A8 002F66A8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802F98AC 002F66AC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802F98B0 002F66B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F98B4 002F66B4*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802F98B8 002F66B8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802F98BC 002F66BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F98C0 002F66C0*/ PPC::Runtime::ASM::fmuls(context->f31, context->f0, context->f1);
/*802F98C4 002F66C4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802F98C8 002F66C8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f29, context->f31);
/*802F98CC 002F66CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F98D0 002F66D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r3));
/*802F98D4 002F66D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F98D8 002F66D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*802F98DC 002F66DC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802F98E0 002F66E0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*802F98E4 002F66E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r5));
/*802F98E8 002F66E8*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*802F98EC 002F66EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F98F0 002F66F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x460, context->r3));
/*802F98F4 002F66F4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*802F98F8 002F66F8*/ PPC::Runtime::ASM::addi(context->r26, context->r3, 0x38);
/*802F98FC 002F66FC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F9900 002F6700*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802F9904 002F6704*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*802F9908 002F6708*/ PPC::Runtime::ASM::mr(context->r7, context->r26);
/*802F990C 002F670C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*802F9910 002F6710*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*802F9914 002F6714*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*802F9918 002F6718*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802F991C 002F671C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*802F9920 002F6720*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*802F9924 002F6724*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F9928 002F6728*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802F992C 002F672C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802F9930 002F6730*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*802F9934 002F6734*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf0, context->r5));
/*802F9938 002F6738*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xbf8);
/*802F993C 002F673C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf7, context->r5));
/*802F9940 002F6740*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf6, context->r5));
/*802F9944 002F6744*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf5, context->r5));
/*802F9948 002F6748*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbf4, context->r5));
/*802F994C 002F674C*/ PPC::Runtime::ASM::bl(fn_803839BC);
/*802F9950 002F6750*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*802F9954 002F6754*/ PPC::Runtime::ASM::lis(context->r3, 0x6);
/*802F9958 002F6758*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x22);
/*802F995C 002F675C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F9960 002F6760*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x390);
/*802F9964 002F6764*/ PPC::Runtime::ASM::bl(fn_80379784);
/*802F9968 002F6768*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*802F996C 002F676C*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x88);
/*802F9970 002F6770*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*802F9974 002F6774*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802F9978 002F6778*/ PPC::Runtime::ASM::bl(fn_80379784);
/*802F997C 002F677C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*802F9980 002F6780*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802F9984 002F6784*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802F9988 002F6788*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802F998C 002F678C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802F9990 002F6790*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802F9994 002F6794*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*802F9998 002F6798*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802F999C 002F679C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*802F99A0 002F67A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802F99A4 002F67A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F99A8 002F67A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*802F99AC 002F67AC*/ PPC::Runtime::ASM::blr();
}