//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8031CBE0.hpp"
#include "fn_8031CBE0.hpp"
#include "fn_8031CBE0.hpp"
#include "fn_8031CBE0.hpp"
#include "fn_803A33B0.hpp"



void fn_803AC7D0(PPC::Runtime::GCContext* context)
{
/*803AC7D0 003A95D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x130, context->r1));
/*803AC7D4 003A95D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AC7D8 003A95D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*803AC7DC 003A95DC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*803AC7E0 003A95E0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*803AC7E4 003A95E4*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*803AC7E8 003A95E8*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*803AC7EC 003A95EC*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*803AC7F0 003A95F0*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*803AC7F4 003A95F4*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*803AC7F8 003A95F8*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1)0, context->qr0);
/*803AC7FC 003A95FC*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*803AC800 003A9600*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*803AC804 003A9604*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803AC808 003A9608*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*803AC80C 003A960C*/ PPC::Runtime::ASM::stfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803AC810 003A9610*/ PPC::Runtime::ASM::psq_st(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*803AC814 003A9614*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*803AC818 003A9618*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*803AC81C 003A961C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803AC820 003A9620*/ PPC::Runtime::ASM::li(context->r6, 0xff);
/*803AC824 003A9624*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*803AC828 003A9628*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803AC82C 003A962C*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*803AC830 003A9630*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*803AC834 003A9634*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*803AC838 003A9638*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*803AC83C 003A963C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803AC840 003A9640*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803AC844 003A9644*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*803AC848 003A9648*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*803AC84C 003A964C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803AC850 003A9650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AC854 003A9654*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*803AC858 003A9658*/ PPC::Runtime::ASM::li(context->r3, 0x80);
/*803AC85C 003A965C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803AC860 003A9660*/ PPC::Runtime::ASM::li(context->r5, 0x194);
/*803AC864 003A9664*/ PPC::Runtime::ASM::bl(fn_GXBegin);
/*803AC868 003A9668*/ PPC::Runtime::ASM::lfd(context->f30, STRUCT_DOUBLE_COUNT_1805E5158 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AC86C 003A966C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*803AC870 003A9670*/ PPC::Runtime::ASM::lhz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r24));
/*803AC874 003A9674*/ PPC::Runtime::ASM::lis(context->r29, 0x4330);
/*803AC878 003A9678*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E5160 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803AC87C 003A967C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r24));
/*803AC880 003A9680*/ PPC::Runtime::ASM::lhz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r24));
/*803AC884 003A9684*/ PPC::Runtime::ASM::lfs(context->f28, STRUCT_FLOAT_COUNT_1805E513C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803AC888, 0x803AC888) //this is a jump label
/*803AC888 003A9688*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*803AC88C 003A968C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*803AC890 003A9690*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*803AC894 003A9694*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803AC898 003A9698*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803AC89C 003A969C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803AC8A0 003A96A0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803AC8A4 003A96A4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f30);
/*803AC8A8 003A96A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r12));
/*803AC8AC 003A96AC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803AC8B0 003A96B0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*803AC8B4 003A96B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*803AC8B8 003A96B8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803AC8BC 003A96BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803AC8C0 003A96C0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f31);
/*803AC8C4 003A96C4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*803AC8C8 003A96C8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f30);
/*803AC8CC 003A96CC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803AC8D0 003A96D0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*803AC8D4 003A96D4*/ PPC::Runtime::ASM::fdivs(context->f29, context->f0, context->f31);
/*803AC8D8 003A96D8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AC8DC 003A96DC*/ PPC::Runtime::ASM::bctrl();
/*803AC8E0 003A96E0*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*803AC8E4 003A96E4*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*803AC8E8 003A96E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*803AC8EC 003A96EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*803AC8F0 003A96F0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803AC8F4 003A96F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803AC8F8 003A96F8*/ PPC::Runtime::ASM::lfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*803AC8FC 003A96FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*803AC900 003A9700*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f30);
/*803AC904 003A9704*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r12));
/*803AC908 003A9708*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803AC90C 003A970C*/ PPC::Runtime::ASM::lfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*803AC910 003A9710*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*803AC914 003A9714*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*803AC918 003A9718*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f30);
/*803AC91C 003A971C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803AC920 003A9720*/ PPC::Runtime::ASM::fdivs(context->f5, context->f0, context->f31);
/*803AC924 003A9724*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803AC928 003A9728*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*803AC92C 003A972C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*803AC930 003A9730*/ PPC::Runtime::ASM::lfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*803AC934 003A9734*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803AC938 003A9738*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803AC93C 003A973C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803AC940 003A9740*/ PPC::Runtime::ASM::fsubs(context->f4, context->f3, context->f30);
/*803AC944 003A9744*/ PPC::Runtime::ASM::lfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803AC948 003A9748*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*803AC94C 003A974C*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f30);
/*803AC950 003A9750*/ PPC::Runtime::ASM::fdivs(context->f25, context->f0, context->f31);
/*803AC954 003A9754*/ PPC::Runtime::ASM::fnmsubs(context->f27, context->f1, context->f4, context->f2);
/*803AC958 003A9758*/ PPC::Runtime::ASM::fmr(context->f1, context->f5);
/*803AC95C 003A975C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803AC960 003A9760*/ PPC::Runtime::ASM::bctrl();
/*803AC964 003A9764*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803AC968 003A9768*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*803AC96C 003A976C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803AC970 003A9770*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*803AC974 003A9774*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803AC978 003A9778*/ PPC::Runtime::ASM::fsubs(context->f3, context->f0, context->f30);
/*803AC97C 003A977C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803AC980 003A9780*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803AC984 003A9784*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803AC988 003A9788*/ PPC::Runtime::ASM::fsubs(context->f2, context->f0, context->f30);
/*803AC98C 003A978C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803AC990 003A9790*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803AC994 003A9794*/ PPC::Runtime::ASM::fnmsubs(context->f26, context->f1, context->f3, context->f2);
/*803AC998 003A9798*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803AC99C 003A979C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803AC9A0 003A97A0*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803AC9A4 003A97A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803AC9A8 003A97A8*/ PPC::Runtime::ASM::bl(fn_8031CBE0);
/*803AC9AC 003A97AC*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803AC9B0 003A97B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*803AC9B4 003A97B4*/ PPC::Runtime::ASM::stfs(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803AC9B8 003A97B8*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*803AC9BC 003A97BC*/ PPC::Runtime::ASM::bl(fn_8031CBE0);
/*803AC9C0 003A97C0*/ PPC::Runtime::ASM::stfs(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803AC9C4 003A97C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*803AC9C8 003A97C8*/ PPC::Runtime::ASM::stfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803AC9CC 003A97CC*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803AC9D0 003A97D0*/ PPC::Runtime::ASM::bl(fn_8031CBE0);
/*803AC9D4 003A97D4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*803AC9D8 003A97D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803AC9DC 003A97DC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803AC9E0 003A97E0*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803AC9E4 003A97E4*/ PPC::Runtime::ASM::stfs(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803AC9E8 003A97E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*803AC9EC 003A97EC*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803AC9F0 003A97F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AC9F4 003A97F4*/ PPC::Runtime::ASM::bl(fn_8031CBE0);
/*803AC9F8 003A97F8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*803AC9FC 003A97FC*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x65);
/*803ACA00 003A9800*/ PPC::Runtime::ASM::blt(.L_803AC888);
/*803ACA04 003A9804*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*803ACA08 003A9808*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*803ACA0C 003A980C*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*803ACA10 003A9810*/ PPC::Runtime::ASM::bl(fn_803A33B0);
/*803ACA14 003A9814*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*803ACA18 003A9818*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*803ACA1C 003A981C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*803ACA20 003A9820*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*803ACA24 003A9824*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*803ACA28 003A9828*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*803ACA2C 003A982C*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1)0, context->qr0);
/*803ACA30 003A9830*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*803ACA34 003A9834*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*803ACA38 003A9838*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*803ACA3C 003A983C*/ PPC::Runtime::ASM::psq_l(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*803ACA40 003A9840*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*803ACA44 003A9844*/ PPC::Runtime::ASM::psq_l(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*803ACA48 003A9848*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xc0);
/*803ACA4C 003A984C*/ PPC::Runtime::ASM::lfd(context->f25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*803ACA50 003A9850*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*803ACA54 003A9854*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*803ACA58 003A9858*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803ACA5C 003A985C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x130);
/*803ACA60 003A9860*/ PPC::Runtime::ASM::blr();
}